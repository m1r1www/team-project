//	Командный	проект.	Группа	ПИ-53.
//	Команда:	Степкин	(в.	25, техлид), Назин	(в.	79), Тимофеев(в.86,).
#include	<iostream>
//	===	БЛОК	ПОДКЛЮЧЕНИЙ:	каждый	участник	добавляет	свой	заголовочный	файл	===
//	#include	"stepkin.h"
//	#include	"petrov.h"
//	#include	"sidorova.h"
#include "timofeev.h"
//	===	КОНЕЦ	БЛОКА	ПОДКЛЮЧЕНИЙ	===
using	namespace	std;
int	main()	{
int	choice;
do	{
cout	<<	"\n===	Командный	проект:	сборник	расчётов	===\n";
//	===	БЛОК	МЕНЮ:	каждый	участник	добавляет	свои	пункты	===
cout << "\nМеню операций:\n";
cout << "6. Перевод рублей в валюту\n";
cout << "7. Перевод валюты в рубли\n";
cout << "0. Выход\n";
cout << "Выберите пункт: ";
//	===	КОНЕЦ	БЛОКА	МЕНЮ	===
cout	<<	"0.	Выход\n";
cout	<<	"Выберите	пункт:	";
// Все расчетные переменные объявляем один раз перед циклом
    double rub, amount, rate, result;
cin	>>	choice;
switch	(choice)	{
//	===	БЛОК	ОБРАБОТКИ:	каждый	участник	добавляет	свои	case	===
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
//	===	КОНЕЦ	БЛОКА	ОБРАБОТКИ	===
case	0:
cout	<<	"Работа	завершена.\n";
break;
default:
cout	<<	"Такого	пункта	нет.\n";
}
}	while	(choice	!=	0);
return	0;
}
