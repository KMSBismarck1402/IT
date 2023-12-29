#include <iostream>

using namespace std;

int main()
{
	
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	a = 1;
	b = 2;
	c = 3;
	d = 4;
	e = 5;
	f = 6;
	int& aR = f;
	int& bR = e;
	int& cR = d;
	int& dR = c;
	int& eR = b;
	int& fR = a;
	cout << "a co gia tri la : " << a << endl;
	cout << "Gia tri tham chieu cua a la : " << aR << endl;
	cout << "b co gia tri la : " << b << endl;
	cout << "Gia tri tham chieu cua b la : " << bR << endl;
	cout << "c co gia tri la : " << c << endl;
	cout << "Gia tri tham chieu cua c la : " << cR << endl;
	cout << "d co gia tri la : " << d << endl;
	cout << "Gia tri tham chieu cua d la : " << dR << endl;
	cout << "e co gia tri la : " << e << endl;
	cout << "Gia tri tham chieu cua e la : " << eR << endl;
	cout << "f co gia tri la : " << f << endl;
	cout << "Gia tri tham chieu cua f la : " << fR << endl;
	
	system("pause");
	return 0;
}