#include <iostream>
using namespace std;

int mainp()
{
	int i, j;

	for (i = 2; i < 50; i++) {
		for (j = 2; j <= (i / j); j++)
			if (!(i%j)) break; // neu tim thay he so, thi khong la so nguyen to
		if (j > (i / j)) cout << i << " la so nguyen to\n";
	}
	system("pause");
	return 0;

}