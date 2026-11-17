#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int b;
	cout << "Введите чило b (b >= 10)";
	cin >> b;
	if (b < 10)
	{
		cout << "error" << endl;
	}
	for (int i = 10; i <= b; i++)
	{
		cout << "=" << i * i << endl;
	}
	return 0;
}
