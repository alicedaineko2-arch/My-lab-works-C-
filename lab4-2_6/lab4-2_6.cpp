#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int a;
	int p;
	p = 1;
	cout << "Введите а (1 <= a <= 15)" << endl;
	cin >> a;
	if (a < 1 || a > 15)
	{
		cout << "error";
		return 1;
	}
	for (int i = a; i <= 15; i++)
	{
		p = p * i;
		cout << "Произведение = " << p << endl; //выводится произведение ВСЕХ чисел по порядку
	}
	return 0;
}
