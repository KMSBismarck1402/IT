#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	clrscr();
	int A[10][10], m, n, x, y, sum = 0;
	//Tao mot ma tran A
	cout << "Nhap so hang va so cot cua ma tran A : \n";
	cin >> n >> m;
	cout << "Nhap cac phan tu cua ma tran A : \n";
	for (x = 1; x < n + 1; ++x)
		for (y = 1; y < m + 1; ++y)
			cin >> A[x][y];
	//Tim tong gia tri cua hang
	for (x = 1; x < n + 1; ++x)
	{
		A[x][m + 1] = 0;
		for (y = 1; y < m + 1; ++y)
			A[x][m + 1] = A[x][m + 1] + A[x][y];
	}
	//Tim tong gia tri cua cot
	for (y = 1; y < m + 1; ++y)
	{
		A[n + 1][y] = 0;
		for (x = 1; x < n + 1; ++x)
			A[n + 1][y] += A[x][y];
	}
	cout << "\nMa tran A: Tong hang (cot cuoi)" << " va Tong cot (hang cuoi) : \n";
	for (x = 1; x < n + 1; ++x)
	{
		for (y = 1; y < m + 2; ++y)
			cout << A[x][y] << "     ";
		cout << "\n";
	}
	//In tong moi hang
	x = n + 1;
	for (y = 1; y < m + 1; ++y)
		cout << A[x][y] << "     ";
	cout << "\n";
	if (m == n)
	{
		for (x = 1; x < m + 1; x++)
			for (y = 1; y < n + 1; y++)
				if (x == y)
					sum += A[x][y];
				else
					if (y == m - (x + 1))
						sum += A[x][y];
	}
	cout << "Tong cac phan tu tren duong cheo la : " << sum << endl;

	return 0;
}