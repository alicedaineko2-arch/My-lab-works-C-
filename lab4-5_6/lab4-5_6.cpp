#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int c; // число
	cout << "Введите натуральное число:" << endl;
	cin >> c;
	int n;
	int s; // сумма
	s = 0;
	cout << "Введите количество последних цифр n" << endl;
	cin >> n;
	for (int i = 0; i < n && c > 0; i++)
	{
		s += c % 10;
		c /= 10;
	}
	cout << "Сумма:" << s << endl;
	return 0;
}
