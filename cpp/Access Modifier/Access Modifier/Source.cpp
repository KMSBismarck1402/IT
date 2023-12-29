#include <iostream>

using namespace std;

class Line
{
public:
	double chieudai;
	void setChieuDai(double dai);
	double layChieuDai(void);
};

// phan dinh nghia cac ham thanh vien
double Line::layChieuDai(void)
{
	return chieudai;
}

void Line::setChieuDai(double dai)
{
	chieudai = dai;
}

// ham main cua chuong trinh
int main()
{
	Line line;

	// thiet lap chieu dai cua line
	line.setChieuDai(50.2);
	cout << "Do dai cua duong la: " << line.layChieuDai() << endl;

	// thiet lap chieu dai cua line ma khong su dung ham thanh vien

	line.chieudai = 24.7; // Dieu nay la OK: boi vi chieudai la public

	cout << "Do dai cua duong la: " << line.chieudai << endl;
	system("pause");
	return 0;
}