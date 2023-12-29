#include <iostream>

using namespace std;
int mainp()
{
	int a = 1;
	int b = 2;
	int c = 3;
	int d = 4;
	cout <<" a = "<< a << endl;
	cout << "b = " << b << endl;
	cout << " c = " << c << endl;
	cout << " d = " << d << endl;
	int temp = a;
	a = d;
	d = temp;

	temp = b;
	b = c;
	c = temp;

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
	cout << "c = " << c << endl;
	cout << "d = " << d << endl;
	system("pause");
	return 0;
}


