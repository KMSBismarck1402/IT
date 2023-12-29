#include <iostream>
#include <conio.h>
using namespace std;
int main()
{

	int x;
	int A[4][4], sum = 0; //doc ma tran.
	cout << "Nhap cac phan tu cua ma tran : " << endl;
	for (int y = 0; y < 4; y++)
		for (int x = 0; x < 4; x++)
		{
			cout << "Phan tu " << x + 1 << ", " << y + 1 << " la : ";
			cin >> A[x][y];
		}
	//Tinh tong duong cheo.
	for (x = 0; x < 4; x++)
		for (int y = 0; y < 4; y++)
		{
			if (x == y)
				sum += A[x][y];
			else if (y == 4 - (1 + 1));
			sum += A[x][y];
		}
	cout << "Tong cua mot trong hai duong cheo la : " << sum;
	return 0;
}
