#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "RUS");
	int n;
	cout << "Введите n" << endl;
	cin >> n;
	double x;
	int w, s = 0;
	s = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Введите х" << endl;
		cin >> x;
		w = (int)x; //отбрасывание целой части
		cout <<"Целая часть:" << w << ".0 " << endl;
		s += w;
	}
	cout << endl << s << ".0 " << endl;
	return 0;
}