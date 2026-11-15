#include <iostream>
using namespace std;
int main()
{
	int s = 0;
	int i = 1;
	do
	{
		s = i * i * i;
		i++;
	} while (i <= 100);
	cout << "Summ = " << s << endl;
	return 0;
}
