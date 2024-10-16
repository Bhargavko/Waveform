import pandas as pd
import matplotlib.pyplot as plt

# Load the CSV data
data = pd.read_csv("waveform.csv")

# Plot the waveform using the CSV data
plt.plot(data['Time'], data['Value'], label='Waveform')

# Add labels and title
plt.xlabel('Time (s)')
plt.ylabel('Amplitude')
plt.title('Waveform Visualization')
plt.legend()
plt.grid(True)

# Save the plot as an image file instead of showing it
plt.savefig("waveform_plot.png")
print("Plot saved as waveform_plot.png")
