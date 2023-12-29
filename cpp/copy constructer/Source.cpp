#include<iostream>
#include<conio.h>
using namespace std;

class songuyento
{
	int a, k, i;
public:
	songuyento(int x)
	{
		a = x;
	}
	void calculate()
	{
		k = 1;
		{
			for (i = 2; i <= a / 2; i++)

				if (a%i == 0)
				{
					k = 0;
					break;
				}
				else
				{
					k = 1;
				}
		}
	}

	void show()
	{
		if (k == 1)
			cout << "\n\tA la so nguyen to. ";
		else
			cout << "\n\tA khong la so nguyen to.";
	}
};

int main()
{

	int a;
	cout << "\n\tNhap so: ";
	cin >> a;
	songuyento obj(a);
	obj.calculate();
	obj.show();
	return 0;
}