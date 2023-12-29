#include <iostream>
#include <conio.h>
using namespace std;
void main()
{

	int array[10], t;
	for (int x = 0; x < 10; x++)
	{
		cout << "Nhap so nguyen thu " << x + 1 << " : " << endl;
		cin >> array[x];
	}
	for (intx = 0; x < 10; x++)
	{
		for (int y = 0; y < 9; y++)
		{
			if (array[y] > array[y + 1])
			{
				t = array[y];
				array[y] = array[y + 1];
				array[y + 1] = t;
			}
		}
	}
	cout << "Thu tu tang dan cua mang la : ";
	for (int x = 0; x < 10; x++)
		cout << endl << array[x];
	return 0;
}