#include <iostream>
using namespace std;

/* Chuong trinh nay chi ra diem khac nhau giua
 * cac so nguyen signed va unsigned.
*/
int main()
{
	short int i;           // mot so nguyen signed short int
	short unsigned int j;  // mot so nguyen unsigned short int

	j = 32769;

	i = j;
	cout << i << " " << j;
	system("pause");
	return 0;
}