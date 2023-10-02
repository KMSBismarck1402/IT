function renderWeather(weather)
{
    console.log(weather);
    var resultsContainer = document.querysSelector("#weather-reson");

    var city = document.createElement("h2");
    city.textContent = weather.name;
    resultsContainer.append(city);

    var temp = document.createElement("p");
    temp.textContent = "Temp: " + weather.main.temp + " F";
    resultsContainer.append(temp);

    var humidity = document.createElement("p");
    humidity.textContent = "Temp: " + weather.main.humidity + " %";
    resultsContainer.append(humidity);

    var wind = document.createElement("p");
    wind.textContent = "Wind: " + weather.wind.speed + " mph, " + weather.wind.deg + "deg";
    resultsContainer.append(wind);

    var weatherDetails = weather.weather[0]
    if(weatherDetails && weatherDetails.description) 

    details.append("");

}

function fecthWeather(query)
{
    var url = "http://api.openweathermap.org/data/2.5/weather?q=London,uk&APPID=009e36fc0d34a9d0ad3d457cd2d7a884";

    fetch(url)
        .then((response) => response.json())
        .then((data) => renderWeather(data));
}

