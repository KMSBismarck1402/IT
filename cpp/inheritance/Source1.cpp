#include<iostream>
#include<conio.h>
using namespace std;

class nhanvien
{
public:
	int idnhanvien;
	char tennhanvien[20], chucdanh[20];
	void get()
	{
		cout << "Nhap id cua nhan vien: ";
		cin >> idnhanvien;
		cout << "Nhap ten nhan vien: ";
		cin >> tennhanvien;
		cout << "Nhap chuc danh cua nhan vien: ";
		cin >> chucdanh;
	}
};
class luong :public nhanvien
{
	float lcoban, pthuhut, pchucvu, ptrachnhiem, lrong;
public:
	void get1()
	{
		cout << "Nhap luong co ban: ";
		cin >> lcoban;
		cout << "Nhap phu cap thu hut: ";
		cin >> pthuhut;
		cout << "Nhap phu cap chuc vu: ";
		cin >> pchucvu;
		cout << "Nhap phu cap trach nhiem: ";
		cin >> ptrachnhiem;
	}
	void calculate()
	{
		lrong = lcoban + pthuhut + pchucvu + ptrachnhiem;
	}
	void display()
	{
		cout << idnhanvien << "\t" << tennhanvien << "\t" << chucdanh << "\t" << lcoban << "\t" << pthuhut << "\t" << pchucvu << "\t" << ptrachnhiem << "\t" << lrong << "\n";
	}
};

int main()
{
	int i, n;
	char ch;
	luong s[10];

	cout << "Nhap so nhan vien: ";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		s[i].get();
		s[i].get1();
		s[i].calculate();
	}
	cout << "\nid \tten \tchucdanh \tlcoban \tpthhut \tpchvu \tptnhiem \tlrong \n";
	for (i = 0; i < n; i++)
	{
		s[i].display();
	}
	return 0;
}