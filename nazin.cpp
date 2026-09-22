#include "nazin.h"
#include "cmath"
#include <iostream>

using namespace std;
// Перевод калорий в джоули: 1 кал = 4.184 Дж
double calToJ(double c) {
    while (true)
    {   double f = c;
        if(f < 0)
        {
            cout << "\nЧисло должно быть неотрицательным";
            f = 1;
            cout << "\nПовторите попытку: ";\
            cin >> c;
        } 
        else
        {
            float value = c * 4.184;
            cout << "\nДжоули = ";
            return value;
            break;
        }
    }
}

// Перевод джоулей в калории: 1 Дж = 1/4.184 кал
double jToCal(double j) {
    while (true)
    {   double f = j;
        if(f < 0)
        {
            cout << "\nЧисло должно быть неотрицательным";
            f = 1;
            cout << "\nПовторите попытку: ";\
            cin >> j;
        } 
        else
        {
            float value = j / 4.184;
            cout << "\nКалории = ";
            return value;
            break;
        }
    }
}

// Перевод килокалорий в килоджоули: 1 ккал = 4.184 кДж
double kcalToKj(double k) {
    while (true)
    {   double f = k;
        if(f < 0)
        {
            cout << "\nЧисло должно быть неотрицательным";
            f = 1;
            cout << "\nПовторите попытку: ";\
            cin >> k;
        } 
        else
        {
            float value = k * 4.184;
            cout << "\nКилоджоули = ";
            return value;
            break;
        }
    }
}
