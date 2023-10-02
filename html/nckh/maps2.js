const apiKey = '05421751ecd24f6e832143543230209';
const location = 'London';
const url = `https://api.worldweatheronline.com/premium/v1/weather.ashx?key=${apiKey}&q=${location}&format=json`;

fetch(url)
  .then(response => response.json())
  .then(data => {
    console.log(data);
  })
  .catch(error => {
    console.error(error);
  });