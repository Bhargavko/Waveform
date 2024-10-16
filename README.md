# Waveform Generator

## Description
The Waveform Generator is a C++ application that generates and visualizes different types of waveforms, including sine, square, and triangle waves. Users can input parameters such as amplitude, frequency, and phase for each waveform type, and the generated values are saved to a CSV file for visualization. The application also includes a Python script for plotting the generated waveforms.

## Features
- **Waveform Generation**: Supports sine, square, and triangle waveforms.
- **User Input**: Allows users to specify amplitude, frequency, and phase.
- **CSV Output**: Saves the generated waveform data to a CSV file for easy access.
- **Visualization**: A Python script that plots the waveform using Matplotlib, allowing for visual analysis of the generated data.

## Getting Started

### Prerequisites
- C++ compiler (g++)
- Python 3.x
- Libraries: `pandas`, `matplotlib`

### Installation
1. **Clone the repository**:
   ```bash
   git clone <repository-url>
   cd WaveformGenerator

2. Build the C++ application:

    g++ main.cpp SineWave.cpp SquareWave.cpp TriangleWave.cpp -o waveform
    Run the application:

3.    ./waveform
    Install Python dependencies (in a virtual environment, if preferred):

4.    python3 -m venv venv
    source venv/bin/activate
    pip install pandas matplotlib
    Plot the waveform:

5.  python3 plot_waveform.py

    Run the waveform executable. Select the type of waveform you want to generate (1: Sine, 2: Square, 3: Triangle). Enter the amplitude, frequency, and phase when prompted. The waveform data will be saved in waveform.csv. Execute          plot_waveform.py to visualize the generated waveform.

    Example Output
    Upon successful execution, you will see output like:

    plaintext
    Copy code
    y(0) = 0.0
    y(0.1) = 0.587785
    ...
    And a plot will be saved as waveform_plot.png.

