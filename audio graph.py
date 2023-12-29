import matplotlib.pyplot as plt
import pandas as pd

# Assuming you have the CSV data in a file named 'data.csv'
df = pd.read_csv('fr u12t.txt')

# Extracting frequency and amplitude columns
frequency = df['Frequency']
amplitude = df['Amplitude']

# Plotting the data
plt.plot(frequency, amplitude, marker='o', linestyle='-')
plt.title('Frequency Response Graph')
plt.xlabel('Frequency')
plt.ylabel('Amplitude')
plt.grid(True)
plt.show()
