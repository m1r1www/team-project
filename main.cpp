#include <iostream>
#include "timofeev.h" // Подключаем ваш модуль

using namespace std;

int main() {
    int choice;
    double rub, amount, rate, result;

    do {
        cout << "\nМеню операций:\n";
        cout << "1. Перевод рублей в валюту\n";
        cout << "2. Перевод валюты в рубли\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Введите сумму в рублях: ";
                cin >> rub;
                cout << "Введите курс валюты: ";
                cin >> rate;
                result = toForeign(rub, rate);
                if (rate > 0) {
                    cout << "Результат в валюте: " << result << "\n";
                }
                break;
            case 2:
                cout << "Введите сумму в валюте: ";
                cin >> amount;
                cout << "Введите курс валюты: ";
                cin >> rate;
                result = toRub(amount, rate);
                if (rate > 0) {
                    cout << "Результат в рублях: " << result << " Руб.\n";
                }
                break;
            case 0:
                cout << "Работа завершена.\n";
                break;
            default:
                cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);

    return 0;
}