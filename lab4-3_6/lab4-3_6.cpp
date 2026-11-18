#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a;
	double p;
	p = 1;
	cout << "Введите 10 чисел" << endl;
	for (int i = 1; i <= 10; i++)
	{
		cout << "a" << i << endl;
		cin >> a;
		p = p * a;
	}
	cout << "Произведение = " << p << endl;
	return 0;
}