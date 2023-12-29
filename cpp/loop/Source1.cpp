#include <iostream>
#include <conio.h>
using namespace std;
int test()
{

	int x;
	float tienlai, tiengui, laisuat, thoihan;
	for (x = 4; x >= 0; x--)
	{
		cout << "Nhap tien gui ban dau, lai suat va thoi han : " << endl;
		cin >> tiengui >> laisuat >> thoihan;
		tienlai = (tiengui*laisuat*thoihan) / 100;
		cout << "Tien gui ban dau = " << tiengui << endl;
		cout << "Lai suat = " << laisuat << "%" << endl;
		cout << "Thoi han = " << thoihan << " nam" << endl;
		cout << "So tien lai = " << tienlai << endl;
	}
	system("pause");
	return 0;
}