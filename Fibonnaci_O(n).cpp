
#include <iostream>
using namespace std;
int main()
{
	double a, b, c, d;
	cout << "Enter the number of elements: ";
	cin >> d;
	a = 0;
	b = 1;
	cout << a << " " << b << " ";
	for (int i = 1; i < d; i++)  //Using For Loop To Find Fibonnaci Series
	{
		c = a + b;
		a = b;
		b = c;
		cout << c << " ";
	}
	return 0;
}
