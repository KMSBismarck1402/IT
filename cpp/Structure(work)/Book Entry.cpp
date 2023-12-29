#include<iostream>
#include<stdio.h>
using namespace std;

struct bookentry
{
	char tensach[20], tacgia[20];
}a[50];
int main()
{

	int i, n;
	cout << "So cuon sach [nho hon 50]: ";
	cin >> n;
	cout << "Nhap thong tin ve sach\n";
	cout << "----------------------\n";

	for (i = 0; i < n; i++)
	{
		cout << "Thong tin ve cuon sach so " << i + 1 << "\n";
		cout << "Ten Sach :";
		cin >> a[i].tensach;
		cout << "\nTac gia :";
		cin >> a[i].tacgia;
		cout << "----------------------\n";
	}
	cout << "================================================\n";
	cout << " STT\t| Ten Sach\t|   Tac gia\n";
	cout << "=====================================================";
	for (i = 0; i < n; i++)
	{
		cout << "\n  " << i + 1 << "\t|" << a[i].tensach << "\t| " << a[i].tacgia;
	}
	cout << "\n=================================================";
	system("pause");
	return 0;
}
