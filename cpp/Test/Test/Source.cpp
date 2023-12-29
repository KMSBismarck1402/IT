#include <iostream>
#include <conio.h>
#include <cmath>
using namespace std;

int mail()
{
	int dayin;
	int monthin;
	int yearin;
	int monthout;
	int dayout;
	int yearout;
	cout << "write your date in and out" << endl;
	cout << "*************************************" << endl;
	cout << "write your choose" << endl;
	cout << "day in is " ;
	cin >> dayin;
	cout << "month in is " ;
	cin >> monthin;
	cout << "year in is " ;
	cin >> yearin;
	cout << dayin << "/" << monthin << "/" << yearin << endl;
	if (monthin <=12)
	{
		cout << "true" << endl;
	}
	else
	{
		cout << "false" << endl;
	}
	cout << "*************************************" << endl;
	
	system("pause");
	return 0;
}