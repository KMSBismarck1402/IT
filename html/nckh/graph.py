from flask import Flask, render_template
import requests
import json
import matplotlib.pyplot as plt

app = Flask(__name__)

@app.route('/')
def index():
    url = "https://archive-api.open-meteo.com/v1/archive?latitude=52.52&longitude=13.41&start_date=2023-08-17&end_date=2023-08-31&hourly=temperature_2m&timezone=Asia%2FSingapore"
    response = requests.get(url)
    data = json.loads(response.text)

    x = []
    y = []

    for item in data['data']:
        x.append(item['time'])
        y.append(item['temperature_2m'])

    fig, ax = plt.subplots()
    ax.plot(x, y)
    ax.set_xlabel('Time')
    ax.set_ylabel('Temperature (°C)')
    ax.set_title('Temperature over Time')

    # Save the figure to a file
    fig.savefig('static/plot.png')

    # Render the HTML template with the plot
    return render_template('index.html')

if __name__ == '__main__':
    app.run(debug=True)
