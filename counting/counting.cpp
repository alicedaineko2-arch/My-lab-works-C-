#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	unsigned int n;
	cout << "enter n";
	cin >> n;
	double a, b, c;
	cout << "enter a and b";
	cin >> a >> b;
	switch (n)
	{
	case 1:	(a + b == c);cout << c << endl; break;
	case 2: (a - b == c);cout << c << endl; break;
	case 3: (a * b == c);cout << c << endl; break;
	case 4: (a / b == c);cout << c << endl; break;
	case 5: default: cout << "error";
	}
	_getch();
	return 0;
}
