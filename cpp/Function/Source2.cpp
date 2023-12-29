#include <iostream>
#include <conio.h>
using namespace std;
void value(int);

int main()
{

	int x;
	cout << "Nhap mot so nguyen : ";
	cin >> x;
	cout << "So ngay sau cua " << x << " la ";
	value(x);
	return 0;
}
void value(int x)
{
	x++;
	cout << x << "." << endl;
}