//	Командный	проект.	Группа	ПИ-53.
//	Команда:	Степкин	(в.	25, техлид), Назин	(в.	79), Тимофеев(в.86,).
#include	<iostream>
#include "timofeev.h" // Подключаем ваш модуль
//	===	БЛОК	ПОДКЛЮЧЕНИЙ:	каждый	участник	добавляет	свой	заголовочный	файл	===
//	#include	"stepkin.h"
//	#include	"petrov.h"
//	#include	"sidorova.h"
//	===	КОНЕЦ	БЛОКА	ПОДКЛЮЧЕНИЙ	===
using	namespace	std;

int	main()	{
int	choice;
//	===	БЛОК	МЕНЮ:	каждый	участник	добавляет	свои	пункты	===
//	===	КОНЕЦ	БЛОКА	МЕНЮ	===
double rub, amount, rate, result;

do {
cout << "\nМеню операций:\n";
cout << "5. Перевод рублей в валюту\n";
cout << "6. Перевод валюты в рубли\n";
cout << "0. Выход\n";
cout << "Выберите пункт: ";
cin >> choice;

        switch (choice) {
            case 5:
                cout << "Введите сумму в рублях: ";
                cin >> rub;
                cout << "Введите курс валюты: ";
                cin >> rate;
                result = toForeign(rub, rate);
                if (rate > 0) {
                    cout << "Результат в валюте: " << result << "\n";
                }
                break;
            case 6:
                cout << "Введите сумму в валюте: ";
                cin >> amount;
                cout << "Введите курс валюты: ";
                cin >> rate;
                result = toRub(amount, rate);
                if (rate > 0) {
                    cout << "Результат в рублях: " << result << " Руб.\n";
                }
                break;
case	0:
cout	<<	"Работа	завершена.\n";
break;
default:
cout	<<	"Такого	пункта	нет.\n";
}
}	while	(choice	!=	0);
return	0;}