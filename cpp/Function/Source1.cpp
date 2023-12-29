#include <iostream>
#include <conio.h>
using namespace std;
int lapphuong(int x); //la prototype.

int main()
{

	int a;
	cout << "Nhap mot so nguyen : ";
	cin >> a;
	cout << "Gia tri lap phuong cua " << a << " la : " << lapphuong(a) << endl; //goi ham lapphuong(a).
	return 0;
}
//dinh nghia ham
int lapphuong(int x)
{
	int y;
	y = x * x*x;
	return(y);
}