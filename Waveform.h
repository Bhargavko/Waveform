#ifndef WAVEFORM_H
#define WAVEFORM_H

class Waveform {
public:
    // Pure virtual functions
    virtual float generate(float time) = 0; // Generates the waveform value at a given time
    virtual void setFrequency(float frequency) = 0; // Sets the frequency of the waveform
    virtual void setAmplitude(float amplitude) = 0; // Sets the amplitude of the waveform
    virtual void setPhase(float phase) = 0; // Sets the phase shift of the waveform
    virtual ~Waveform() {} // Virtual destructor
};

#endif // WAVEFORM_H
