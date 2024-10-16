#ifndef TRIANGLEWAVE_H
#define TRIANGLEWAVE_H

#include "Waveform.h"

class TriangleWave : public Waveform {
public:
    TriangleWave() : amplitude(1.0), frequency(1.0), phase(0.0) {}

    void setAmplitude(float amp) override { amplitude = amp; }
    void setFrequency(float freq) override { frequency = freq; }
    void setPhase(float ph) override { phase = ph; }

    float generate(float time) override;

private:
    float amplitude;
    float frequency;
    float phase;
};

#endif // TRIANGLEWAVE_H
