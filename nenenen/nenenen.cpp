#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a;
	double x;
	double y;
	cout << "Введите значение a (a > 0):";
	cin >> a;
	if (a <= 0)
	{
		cout << "Ошибка, значение а должно быть больше 0";
		return 1;
	}
	cout << "Введите значение х:";
	cin >> x;
	if (x <= 0)
	{
		if (x == 0)
		{
			cout << "Деление на 0 при х = 0 нельзя";
			return 1;
		}
		double numerator = (3 * x - 1) * (3 * x - 1);
		double denominator = x * x * x * x * x * x;
		y = numerator / denominator;
	}
	else if (x > 0 && x <= a)
	{
		double inner = log(fabs(sqrt(x + a)));
		y = inner * inner;
	}
	else
	{
		y = cos(sqrt(1 + x * x));
	}
	cout << "Значение функции y = f(x) равно:" << y << endl;
	return 0;
}