#include <iostream>
using namespace std;

int maio()
{
	
	int a;
	int b;
	cout << "choose a ";
	cin >> a;
	for (int d = a; d < 100; d = d + 1)
	{
		cout << "gia tri cua a " << d << endl;
		d++;
	}
	cout << "choose b ";
	cin >> b;
	for (int e = b; e < 100; e = e + 1)
	{
		cout << "gia tri cau b la " << e << endl;
		e++;
	}
	
	system("pause");
	return 0;
}