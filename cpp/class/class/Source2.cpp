#include <iostream>

using namespace std;

class Box
{
public:
	double chieudai;   // chieu dai cua hop
	double chieurong;  // chieu rong cua hop
	double chieucao;   // chieu cao cua hop
};

int main()
{
	Box Box1;          // Khai bao Box1 la cua kieu Box
	Box Box2;          // Khai bao Box2 la cua kieu Box
	double thetich = 0.0;     // Luu giu the tich cua Box vao bien thetich

	// box 1 specification
	Box1.chieucao = 4.5;
	Box1.chieudai = 2.2;
	Box1.chieurong = 1.5;

	// box 2 specification
	Box2.chieucao = 3.2;
	Box2.chieudai = 4.5;
	Box2.chieurong = 2.3;
	// thetich of box 1
	thetich = Box1.chieucao * Box1.chieudai * Box1.chieurong;
	cout << "The tich cua Box1 la: " << thetich << endl;

	// thetich of box 2
	thetich = Box2.chieucao * Box2.chieudai * Box2.chieurong;
	cout << "The tich cua Box2 la: " << thetich << endl;
	return 0;
}