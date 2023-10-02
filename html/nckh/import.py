from WorldWeatherPy import HistoricalLocationWeather

api_key = '05421751ecd24f6e832143543230209'
location_list = ['London', 'New York']
start_date = '2022-01-01'
end_date = '2022-01-31'
frequency = 24

for location in location_list:
    hist_weather_data = HistoricalLocationWeather(api_key, location, start_date, end_date, frequency)
    hist_weather_data.write_csv(location + 'your_csv_file.csv')