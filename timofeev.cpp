#include "timofeev.h"
#include <iostream>

using namespace std;

double toForeign(double rub, double rate) {
    if (rate <= 0) {
        cout << "Ошибка: курс валюты должен быть строго больше 0.\n";
        return -1.0;
    }
    return rub / rate;
}

double toRub(double amount, double rate) {
    if (rate <= 0) {
        cout << "Ошибка: курс валюты должен быть строго больше 0.\n";
        return -1.0;
    }
    return amount * rate;
}