#include<iostream>
#include<conio.h>
#include<math.h>    

using namespace std;

int mall()
{

	// Khai bao bien
	int n;

	// Nhap gia tri dau vao
	cout << "Nhap mot so :";
	cin >> n;

	cout << "Danh sach cac so nguyen to la " << n << endl;

	//vong lap for de tim so nguyen to
	for (int i = 2; i < n; i++)
	{
		bool prime = true;
		for (int j = 2; j*j <= i; j++)
		{
			if (i % j == 0)
			{
				prime = false;
				break;
			}
		}
		if (prime) cout << i << endl;
	}

	system("pause");
	return 0;
}