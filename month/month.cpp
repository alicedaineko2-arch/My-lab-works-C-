#include <iostream>
#include<conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	unsigned int m;
	cout << "m = ";
	cin >> m;
	switch (m)
	{
	case 1: cout << "Январь - 31 \n"; break;
	case 2: cout << "Февраль - 28 \n"; break; //невисокосный год
	case 3: cout << "Март - 31 \ n"; break;
	case 4: cout << "Апрель - 30 \n"; break;
	case 5: cout << "Май - 31 \n"; break;
	case 6: cout << "Июнь - 30 \n"; break;
	case 7: cout << "Июль - 31 \n"; break;
	case 8: cout << "Авгест - 31 \n"; break;
	case 9: cout << "Сентябрь - 30 \n"; break;
	case 10: cout << "Октябрь - 31 \n"; break;
	case 11: cout << "Ноябрь - 30 \n"; break;
	case 12: cout << "Декабрь - 31 \n"; break;
	default: cout << "error! \n";
	}
	_getch();
	return 0;
}