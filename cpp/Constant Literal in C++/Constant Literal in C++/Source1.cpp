#include <iostream>
using namespace std;

int main()
{
	// tu khoa const
	const int  CHIEUDAI = 10;
	const int  CHIEURONG = 5;
	const char NEWLINE = '\n';
	int area;

	area = CHIEUDAI * CHIEURONG;
	cout << area;
	cout << NEWLINE;
	system("pause");
	return 0;
}