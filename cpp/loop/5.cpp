#include <iostream>
#include <cmath>
#include <conio.h>
using namespace std;
int seuoc ()
{
	printf("finding result with a = 6, b = 6");
	int result;
	cout << "result = " << endl;
	cin>>result;
	if (result == 12)
	{
		cout << "correct" << endl;
		cout << "good job" << endl;
	}
	else
	{
		cout << "incorrect" <<  endl;
		cout << "try again" << endl;
	}
	int x;
	cout << "nhap ket qua o tren : ";
	cin >> x;
	cout << "Boi so cua no voi " << x << " so dau tien la : ";
	for (int y = 1; y < 16; y++)
		cout << "\n" << x << "x" << y << "=" << x * y;
	long int so1, so2, sodaonguoc = 0;
	cout << "nhap ket qua o tren : " << endl;
	cin >> so1;
	so2 = so1;
	do
	{
		sodaonguoc = sodaonguoc * 10;
		int digit = so1 % 10;
		sodaonguoc += digit;
		so1 /= 10;
	} while (so1);
	cout << "ket qua ban da nhap la " << so2 << "." << endl;
	cout << "ket qua dao nguoc la " << sodaonguoc << "." << endl;
	int demkytu = 0;
	int demtu = 1;
	cout << "Ban nhap ket qua: " << endl;
	char ch = 'a';
	while (ch != '\r')
	{
		ch = _getch();
		if (ch == ' ')
			demtu++;
		else
			demkytu++;
	}
	cout << "\n So so trong ket qua = " << demtu << endl;
	cout << "\nSo ky tu trong ket qua la = " << demkytu - 1 << endl;
	system("pause");
	return 0;
}