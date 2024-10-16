#include "TriangleWave.h"
#include <cmath>

float TriangleWave::generate(float time) {
    float period = 1.0 / frequency;
    float value = 2.0f * amplitude * (fabs(fmod(time * frequency + phase / (2 * M_PI), 1.0) - 0.5) - 0.25);
    return value;
}
