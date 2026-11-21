#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	const double PI = 3.14; // число пи
	double a = -2 * PI;
	double b = 2 * PI;
	double h = PI / 12;
	double y;
	cout << "x\t\ty" << endl; // t - табуляция
	for (double x = a; x <= b + 1e-9; x += h)
	{
		if (x <= 0)
		{
			y = tan(x / 2);
		}
		else if (x <= PI / 2)
		{
			y = sin(x - PI / 4);
		}
		else
		{
			y = cos(2 * x);
		}
		cout << x << "\t\t" << y << endl;
	}
	return 0;
}
