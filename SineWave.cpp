#include "SineWave.h"

// Constructor initializes member variables to default values
SineWave::SineWave() : amplitude(1.0f), frequency(1.0f), phase(0.0f) {}

// Generate the sine wave value at a given time
float SineWave::generate(float time) {
    return amplitude * sin(2 * M_PI * frequency * time + phase);
}

// Set the frequency of the sine wave
void SineWave::setFrequency(float frequency) {
    this->frequency = frequency;
}

// Set the amplitude of the sine wave
void SineWave::setAmplitude(float amplitude) {
    this->amplitude = amplitude;
}

// Set the phase shift of the sine wave
void SineWave::setPhase(float phase) {
    this->phase = phase;
}
