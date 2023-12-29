#include <iostream>
#include <conio.h>
using namespace std;
int n()
{

	long int so1, so2, sodaonguoc = 0;
	cout << "Nhap mot so nguyen : " << endl;
	cin >> so1;
	so2 = so1;
	do
	{
		sodaonguoc = sodaonguoc * 10;
		int digit = so1 % 10;
		sodaonguoc += digit;
		so1 /= 10;
	} while (so1);
	cout << "So nguyen ban da nhap la " << so2 << "." << endl;
	cout << "So nguyen dao nguoc la " << sodaonguoc << "." << endl;
	system("pause");
	return 0;
}