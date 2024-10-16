#ifndef SINEWAVE_H
#define SINEWAVE_H

#include <cmath>
#include "Waveform.h"

class SineWave : public Waveform {
private:
    float amplitude;  // Amplitude of the sine wave
    float frequency;  // Frequency of the sine wave
    float phase;      // Phase shift of the sine wave

public:
    SineWave();  // Constructor
    float generate(float time) override;  // Generates the sine wave value
    void setFrequency(float frequency) override;  // Set the frequency
    void setAmplitude(float amplitude) override;  // Set the amplitude
    void setPhase(float phase) override;  // Set the phase
};

#endif // SINEWAVE_H
