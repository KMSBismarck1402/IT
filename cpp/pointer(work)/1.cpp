#include<iostream> 
#include<conio.h>
using namespace std;

int test()
{
	int arr[5], i;
	int *p = arr;
	cout << "Nhap 5 so:";
	cin >> *p >> *(p + 1) >> *(p + 2) >> *(p + 3) >> *(p + 4);
	cout << "Cac so ban vua nhap theo thu tu dao nguoc la:\n";
	for (i = 4; i >= 0; i--)
		cout << *(p + i) << endl;


	return 0;

}