#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
int forl()
{

	float giaithua = 1;
	float num, tong, term, bieuthuc;
	int i, n = 20, index, j = 1;
	cout << "Nhap mot so : \n";
	cin >> num;
	tong = num;
	bieuthuc = num;
	for (i = 2, index = 3; i <= n; i++, index += 2)
	{
		for (j = 1, giaithua = 1; j <= index; j++)
			giaithua *= j;
		tong = tong * pow((double)(-1), (double)(2 * i - 1))*num*num;
		term = tong / giaithua;
		bieuthuc += term;
	}
	cout << "Gia tri cua bieu thuc = " << bieuthuc << endl;
	system("pause"); 
	return 0;
}