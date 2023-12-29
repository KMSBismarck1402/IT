#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
	int a, b, c;
	float  d;

	cout << "Nhap gia tri cua a: ";
	cin >> a;
	cout << "Nhap gia tri cua b: ";
	cin >> b;
	cout << "Nhap gia tri cua c: ";
	cin >> c;

	try
	{
		if ((a - b) != 0)
		{
			d = c / (a - b);
			cout << "Ket qua la: " << d;
		}
		else
		{
			throw(a - b);
		}
	}

	catch (int i)
	{
		cout << "Ket qua la duong vo cung vi (a-b) bang: " << i;
	}

	return 0;
}