#include <iostream>
#include <fstream>
#include "SineWave.h"
#include "SquareWave.h"
#include "TriangleWave.h"

int main() {
    // Variables to hold user inputs
    int choice;
    float amplitude, frequency, phase;

    // Get user inputs for waveform parameters
    std::cout << "Select waveform type (1: Sine, 2: Square, 3: Triangle): ";
    std::cin >> choice;
    std::cout << "Enter Amplitude: ";
    std::cin >> amplitude;
    std::cout << "Enter Frequency (Hz): ";
    std::cin >> frequency;
    std::cout << "Enter Phase (radians): ";
    std::cin >> phase;

    // Create waveform object based on choice and set parameters
    Waveform* waveform;
    if (choice == 1) {
        waveform = new SineWave();
    } else if (choice == 2) {
        waveform = new SquareWave();
    } else if (choice == 3) {
        waveform = new TriangleWave();
    }

    waveform->setAmplitude(amplitude);
    waveform->setFrequency(frequency);
    waveform->setPhase(phase);

    // Open CSV file for writing
    std::ofstream outFile("waveform.csv");
    outFile << "Time,Value\n";  // Write header with uppercase

    // Generate waveform values and write to CSV file
    for (float t = 0; t < 1; t += 0.1f) {
        float value = waveform->generate(t);
        outFile << t << "," << value << "\n";  // Write time and value to CSV
        std::cout << "y(" << t << ") = " << value << std::endl;
    }

    outFile.close();  // Close the CSV file
    delete waveform;

    return 0;
}

