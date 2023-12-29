#include <iostream>

using namespace std;

class Line
{
public:
	void setChieuDai(double dai);
	double layChieuDai(void);
	Line();  // Day la constructor

private:
	double chieudai;
};

// phan dinh nghia cac ham thanh vien, bao gom ca constructor
Line::Line(void)
{
	cout << "Doi tuong da duoc tao!" << endl;
}

void Line::setChieuDai(double dai)
{
	chieudai = dai;
}

double Line::layChieuDai(void)
{
	return chieudai;
}
// Ham main cua chuong trinh
int main()
{
	Line line;

	// thiet lap chieu dai cua line
	line.setChieuDai(6.0);
	cout << "Chieu dai cua duong la: " << line.layChieuDai() << endl;
	system("pause");
	return 0;
}