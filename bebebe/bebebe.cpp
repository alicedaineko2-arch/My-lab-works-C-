#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	cout << "Введите двухзначное число: ";
	cin >> n;
	int abs_n = abs(n);
	if (abs_n < 10 || abs_n> 99)
	{
		cout << " Данное введенное число не является двухзначным";
		return 1;
	}
	int a = abs_n / 10;
	int b = abs_n % 10;
	int  sum = (a + b);
	if (sum >= 10 && sum <= 99)
	{
		cout << " Да, сумма двух цифр числа является двухзначным числом ";
	}
	else
	{
		cout << " Нет, сумма двух цифр числа не является двухзначным числом ";
	}
	return 0;
}
