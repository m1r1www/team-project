//	Командный	проект.	Группа	ПИ-53.
//	Команда:	Степкин	(в.	25, техлид), Назин	(в.	79), Тимофеев(в.86,).
#include	<iostream>
//	===	БЛОК	ПОДКЛЮЧЕНИЙ:	каждый	участник	добавляет	свой	заголовочный	файл	===
//	#include	"stepkin.h"
#include	"nazin.h"
//	#include	"sidorova.h"
//	===	КОНЕЦ	БЛОКА	ПОДКЛЮЧЕНИЙ	===
using	namespace	std;
int	main()	{
int	choice;
do	{
cout	<<	"\n===	Командный	проект:	сборник	расчётов	===\n";
//	===	БЛОК	МЕНЮ:	каждый	участник	добавляет	свои	пункты	===
        cout << "3. Калории → Джоули\n";
        cout << "4. Джоули → Калории\n";
        cout << "5. Килокалории → Килоджоули\n";
//	===	КОНЕЦ	БЛОКА	МЕНЮ	===
cout	<<	"0.	Выход\n";
cout	<<	"Выберите	пункт:	";
cin	>>	choice;
switch	(choice)
{
        case 3:
        cout << "Введите количество калорий: ";
        cin >> choice;
        cout << "Джоули = " << calToJ(choice) << "\n";
        break;
        case 4:
        cout << "Введите количество джоулей: ";
        cin >> choice;
        cout << "Калории = " << jToCal(choice) << "\n";
        break;
        case 5:
        cout << "Введите количество килокалорий: ";
        cin >> choice;
        cout << "Килоджоули = " << kcalToKj(choice) << "\n";
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