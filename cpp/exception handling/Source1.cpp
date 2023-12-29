#include<iostream>
#include<conio.h>
using namespace std;

void test(int x)
{
	try
	{
		if (x > 0)
			throw x;
		else
			throw 'x';
	}

	catch (int x)
	{
		cout << "\nBat mot so nguyen va so nguyen do la: " << x;
	}

	catch (char x)
	{
		cout << "\nBat mot ky tu va ky tu do la: " << x;
	}
}

int main()
{

	cout << "\nVi du nhieu khoi catch:";
	test(10);
	test(0);
	return 0;
}