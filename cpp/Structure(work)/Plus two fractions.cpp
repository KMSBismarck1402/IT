#include<iostream> 
#include<conio.h> 
using namespace std;
struct Phanso
{
	int tuso;
	int mauso;

};

Phanso sum(Phanso, Phanso);

int main()
{
	int tuso1, mauso1, tuso2, mauso2;
	cout << "Nhap phan so thu nhat: tu so va mau so la: ";
	cin >> tuso1 >> mauso1;
	cout << "Nhap phan so thu hai : tu so va mau so la: ";
	cin >> tuso2 >> mauso2;

	Phanso f1 = { tuso1, mauso1 };/* 1/2 */
	Phanso f2 = { tuso2, mauso2 };/* 2/5 */
	Phanso ketqua = sum(f1, f2);//phep cong phan so 
	cout << ketqua.tuso << "/" << ketqua.mauso;  //hien thi ket qua 



	return 0;

}

Phanso sum(Phanso f1, Phanso f2)
{
	Phanso ketqua = { (f1.tuso * f2.mauso) + (f2.tuso * f1.mauso), f1.mauso * f2.mauso };
	return ketqua;

}