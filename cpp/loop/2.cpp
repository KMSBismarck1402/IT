#include <cstdlib> 
#include <iostream> 
#include<iomanip> 
#include<cmath> 

using namespace std;

int mainLING(int argc, char *argv[])
{
	int i;
	int j;
	int k;

	for (i = 1; i <= 7; i++) {
		for (j = 1; j <= i; ++j)
			cout << j;

		for (k = 7 - i; k >= 1; k--)cout << "*";

		cout << "\n";
	}

	cout << "\n";
	system("PAUSE");
	return EXIT_SUCCESS;
}