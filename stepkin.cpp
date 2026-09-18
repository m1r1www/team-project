#include "stepkin.h"

// Ускорение свободного падения
const double g = 9.81;

// Потенциальная энергия: E = m * g * h
double potentialEnergy(double m, double h) {
    return m * g * h;
}

// Высота через энергию: h = E / (m * g)
double heightFromEnergy(double E, double m) {
    return E / (m * g);
}