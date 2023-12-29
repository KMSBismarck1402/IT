#include<iostream>
#include<conio.h>

using namespace std;

int moieling()
{

	// Khai bao bien
	int counter, n;
	long last = 1, next = 0, sum;
	// Nhap gia tri
	cout << "Nhap mot so :";
	cin >> n;

	//Tinh chuoi Fibonacci 
	while (next < n / 2)
	{
		cout << last << "  ";
		sum = next + last;
		next = last;
		last = sum;
	}

	system("pause");
	return 0;
}
