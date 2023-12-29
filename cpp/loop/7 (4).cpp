#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int x;
	cout << "Nhap mot so nguyen : ";
	cin >> x;
	cout << "Boi so cua no voi " << x << " so dau tien la : ";
	for (int y = 1; y < 16; y++)
		cout <<  x << "x" << y << "=" << x * y << endl;
	system("pause");
	return 0;
}