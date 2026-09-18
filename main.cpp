//    Командный    проект.    Группа    ПИ-53.
//    Команда:    Степкин    (в.    25, техлид), Назин    (в.    79), Тимофеев(в.86,).
#include    <iostream>
//    ===    БЛОК    ПОДКЛЮЧЕНИЙ:    каждый    участник    добавляет    свой    заголовочный    файл    ===
#include    "stepkin.h"
#include    "nazin.h"
#include    "timofeev.h"
//    ===    КОНЕЦ    БЛОКА    ПОДКЛЮЧЕНИЙ    ===

using    namespace    std;

int    main()    {
    int    choice;
    // Объявление всех переменных для всех вариантов
    double rub, amount, rate, result;
    double E, m, h;

    do    {
        cout    <<    "\n===    Командный    проект:    сборник    расчётов    ===\n";
        //    ===    БЛОК    МЕНЮ    ===
        cout << "1. Рассчитать потенциальную энергию\n";
        cout << "2. Рассчитать высоту через энергию\n";
        cout << "3. Калории → Джоули\n";
        cout << "4. Джоули → Калории\n";
        cout << "5. Килокалории → Килоджоули\n";
        cout << "6. Перевод рублей в валюту\n";
        cout << "7. Перевод валюты в рубли\n";
        cout << "0. Выход\n";
        cout << "Выберите пункт: ";
        //    ===    КОНЕЦ    БЛОКА    МЕНЮ    ===

        cin    >>    choice;

        switch    (choice)    {
        //    ===    БЛОК    ОБРАБОТКИ    ===
            case 1:
                cout << "Введите массу (кг) и высоту (м): ";
                cin >> m >> h;
                if (m < 0 || h < 0) {
                    cout << "ERROR, h or m < 0\n";
                }
                else cout << "Потенциальная энергия = " << potentialEnergy(m, h) << " Дж\n";
                break;

            case 2:
                cout << "Введите энергию (Дж) и массу (кг): ";
                cin >> E >> m;
                cout << "Высота = " << heightFromEnergy(E, m) << " м\n";
                break;

            case 3:
                cout << "Введите количество калорий: ";
                cin >> amount;
                cout << "Джоули = " << calToJ(amount) << "\n";
                break;

            case 4:
                cout << "Введите количество джоулей: ";
                cin >> amount;
                cout << "Калории = " << jToCal(amount) << "\n";
                break;

            case 5:
                cout << "Введите количество килокалорий: ";
                cin >> amount;
                cout << "Килоджоули = " << kcalToKj(amount) << "\n";
                break;

            case 6:
                cout << "Введите сумму в рублях: ";
                cin >> rub;
                cout << "Введите курс валюты: ";
                cin >> rate;
                result = toForeign(rub, rate);
                if (rate > 0) {
                    cout << "Результат в валюте: " << result << "\n";
                }
                break;

            case 7:
                cout << "Введите сумму в валюте: ";
                cin >> amount;
                cout << "Введите курс валюты: ";
                cin >> rate;
                result = toRub(amount, rate);
                if (rate > 0) {
                    cout << "Результат в рублях: " << result << " Руб.\n";
                }
                break;
        //    ===    КОНЕЦ    БЛОКА    ОБРАБОТКИ    ===

            case 0:
                cout << "Работа завершена.\n";
                break;

            default:
                cout << "Такого пункта нет.\n";
        }
    } while (choice != 0);

    return 0;
}