#include <iostream>
using namespace std;

void  doihe (int x)
{
		int a = 0;
		int b = 0;
		char c[1000];
		int e = x;
		while (e != 0)
		{
			int d = e % 16;
			if (d <= 9)
				c[b++] = d+48;
			else if (d == 10)
				c[b++] = 'A';
			else if (d == 11)
				c[b++] = 'B';
			else if (d == 12)
				c[b++] = 'C';
			else if (d == 13)
				c[b++] = 'D';
			else if (d == 14)
				c[b++] = 'E';
			else if (d == 15)
				c[b++] = 'F';
			a++;
			e /= 16;
		}
		for (int i = a - 1; i >= 0; i--)
		{
				cout << c[i];
		}
}
int main()
{
	int x;
	cout<<"Nhap gia tri can doi: ";
	cin >> x;
	doihe(x);

	return 0;
}
