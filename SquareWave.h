#ifndef SQUAREWAVE_H
#define SQUAREWAVE_H

#include "Waveform.h"

class SquareWave : public Waveform {
private:
    float frequency;
    float amplitude;
    float phase;

public:
    SquareWave() : frequency(1.0f), amplitude(1.0f), phase(0.0f) {}

    float generate(float time) override {
        // Generate the square wave value at the given time
        return (sin(2 * M_PI * frequency * time + phase) >= 0) ? amplitude : -amplitude;
    }

    void setFrequency(float freq) override {
        frequency = freq;
    }

    void setAmplitude(float amp) override {
        amplitude = amp;
    }

    void setPhase(float ph) override {
        phase = ph;
    }
};

#endif // SQUAREWAVE_H
