#include <cstdlib> 
#include <iostream> 
#include<iomanip> 
#include<cmath> 

using namespace std;

int mainL(int argc, char *argv[])
{
	int i = 7;
	int j = 7;

	for (i = 1; i <= 7; i++) {
		for (j = 7 - i; j >= 1; --j)cout << "*";
		cout << "\n";
	}

	cout << "\n";
	system("PAUSE");
	return EXIT_SUCCESS;
}