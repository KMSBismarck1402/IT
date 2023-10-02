// Get the form element from the HTML document
let form = document.getElementById("myForm");

// Add an event listener to the form when it is submitted
form.addEventListener("submit", function (event) {
  // Prevent the default behavior of the form submission
  event.preventDefault();

  // Get the values of the latitude and longitude inputs
  let lat = document.getElementById("latitude").value;
  let lon = document.getElementById("longitude").value;
  let timeStart = document.getElementById("timeStart").value;
  let timeEnd = document.getElementById("timeEnd").value;

  // Construct the URL of the API with the latitude and longitude parameters
  let url =
    "https://archive-api.open-meteo.com/v1/archive?latitude=" +
    lat +
    "&longitude=" +
    lon +
    "&start_date=" +
    timeStart +
    "&end_date=" +
    timeEnd +
    "&hourly=temperature_2m,windspeed_10m";
  // The rest of the code is the same as before
  console.log(url);
  fetch(url)
    .then((response) => response.json())
    .then((data) => {
      // Extract the temperature, wind speed and date arrays from the data
      let temperature = data.hourly.temperature_2m;
      let wind_speed = data.hourly.windspeed_10m;
      let date = data.hourly.time.map(function (item) {
        return item.replace("2023-", "").replace("T", " ");
      });

      // Create a chart element in the HTML document
      let ctx = document.getElementById("myChart").getContext("2d");

      // Create a new chart using Chart.js
      let myChart = new Chart(ctx, {
        type: "line",
        data: {
          labels: date,
          datasets: [
            {
              label: "Temperature (°C)",
              data: temperature,
              backgroundColor: "rgba(255, 99, 132, 0.2)",
              borderColor: "rgba(255, 99, 132, 1)",
              borderWidth: 1,
              yAxisID: "y1", // Link to the first y-axis
            },
            {
              label: "Wind speed (m/s)",
              data: wind_speed,
              backgroundColor: "rgba(54, 162, 235, 0.2)",
              borderColor: "rgba(54, 162, 235, 1)",
              borderWidth: 1,
              yAxisID: "y2", // Link to the second y-axis
            },
          ],
        },
        options: {
          scales: {
            xAxes: [
              {
                type: "time",
                time: {
                  unit: "day",
                },
              },
            ],
            yAxes: [
              {
                id: "y1", // First y-axis for temperature
                scaleLabel: {
                  display: true,
                  labelString: "°C",
                },
              },
              {
                id: "y2", // Second y-axis for wind speed
                scaleLabel: {
                  display: true,
                  labelString: "m/s",
                },
                position: "right", // Position the second y-axis on the right
              },
            ],
          },
        },
      });
    })
    .catch((error) => console.error(error));
});
