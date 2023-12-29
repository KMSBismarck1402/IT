#include<iostream>
#include<conio.h>

using namespace std;

int maiF()
{

	// Khai bao bien
	int x, n, fact = 1;

	// Nhap gia tri dau vao
	cout << "Nhap mot so :";
	cin >> n;

	//Vong lap for
	for (int x = 1; x <= n; x++)
	{
		fact = fact * x;
	}

	cout << n << " Gia tri cua giai thua la " << fact;
	system("pause");
	return 0;
}
