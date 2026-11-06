#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	double a, b, c;
	cout << "write a, b, c";
	cin >> a >> b >> c;
	if (a == b)
	{
		cout << "equal numbers are:" << a << b << endl;
	}
	else if (b == c)
	{
		cout << "equal numbers are:" << b << c << endl;
	}
	else if (a == c)
	{
		cout << "equal numbers are:" << a << c << endl;
	}
	else (a != b && b != c && a != c);
	{
		cout << "no equal numbers" << endl;
	}
	return 0;
}
