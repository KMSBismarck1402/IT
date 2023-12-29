#include <iostream>

using namespace std;

class Box
{
public:
	double chieudai;   // chieu dai cua hop
	double chieurong;  // chieu rong cua hop
	double chieucao;   // chieu cao cua hop

	// Khai bao ham thanh vien
	double thetich(void);
	void layDoDai(double dai);
	void layDoRong(double rong);
	void layChieuCao(double cao);
};

// phan dinh nghia cac ham thanh vien
double Box::thetich(void)
{
	return chieudai * chieurong * chieucao;
}

void Box::layDoDai(double dai)
{
	chieudai = dai;
}

void Box::layDoRong(double rong)
{
	chieurong = rong;
}

void Box::layChieuCao(double cao)
{
	chieucao = cao;
}

// ham main cua chuong trinh
int main()
{
	Box Box1;          // Khai bao Box1 la cua kieu Box
	Box Box2;          // Khai bao Box2 la cua kieu Box
	double thetich = 0.0;     // Luu giu the tich cua Box vao bien thetich

	// thong tin chi tiet ve box1
	Box1.layDoDai(2.3);
	Box1.layDoRong(5.6);
	Box1.layChieuCao(4.5);

	// thong tin chi tiet ve box2
	Box2.layDoDai(7.4);
	Box2.layDoRong(4.2);
	Box2.layChieuCao(3.8);

	// the tich cua box1
	thetich = Box1.thetich();
	cout << "The tich cua box1 la: " << thetich << endl;

	// the tich cua box2
	thetich = Box2.thetich();
	cout << "The tich cua box2 la: " << thetich << endl;
	system("pause");
	return 0;
}