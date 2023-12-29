#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;
int main()
{

	int slength;
	char x[81]; //cho phep nguoi dung nhap mot chuoi co do dai toi da la 80 ky tu.
	cout << "Nhap chuoi : " << endl;
	cin >> x;
	slength = strlen(x);
	cout << "Do dai cua chuoi " << x << " la " << slength << "." << endl;
	system("pause");
	return 0;
}