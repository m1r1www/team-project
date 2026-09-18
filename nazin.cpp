#include "nazin.h"
#include "cmath"
// Перевод калорий в джоули: 1 кал = 4.184 Дж
double calToJ(double c) {
    return c * 4.184;
}

// Перевод джоулей в калории: 1 Дж = 1/4.184 кал
double jToCal(double j) {
    return j / 4.184;
}

// Перевод килокалорий в килоджоули: 1 ккал = 4.184 кДж
double kcalToKj(double k) {
    return k * 4.184;
}
