#include <cstdlib> 
#include <iostream> 

using namespace std;

int mainline(int argc, char *argv[])
{
	int i;
	int j;;

	for (i = 1; i <= 9; i = i + 2) {
		for (j = 1; j <= i; ++j)
			cout << "*";

		cout << "\n";

	}
	for (i = 9; i >= 1; i = i - 2) {
		for (j = i; j >= 1; --j)
			cout << "*";

		cout << "\n";


	}

	cout << "\n";
	system("PAUSE");
	return EXIT_SUCCESS;
}