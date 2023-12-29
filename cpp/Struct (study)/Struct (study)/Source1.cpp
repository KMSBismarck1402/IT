#include <iostream>

using namespace std;

int main()
{
	int  bien1 = 15000;   // khai bao bien.
	int  *sv;        // bien con tro sv

	sv = &bien1;       // luu tru dia chi cua bien1 vao bien con tro sv

	cout << "Gia tri cua bien1 la: ";
	cout << bien1 << endl;

	// In dia chi duoc luu tru trong bien con tro sv
	cout << "Dia chi duoc luu tru trong bien con tro sv la: ";
	cout << sv << endl;

	// Truy cap gia tri co san tai dia chi cua bien con tro
	cout << "Gia tri cua *sv la: ";
	cout << *sv << endl;

	return 0;
}