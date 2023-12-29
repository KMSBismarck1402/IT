#include<iostream>
#include<conio.h>
using namespace std;
class coso
{
public:
	virtual void show()
	{
		cout << "\n  Hien thi lop co so:";
	}
	void display()
	{
		cout << "\n  Trung bay lop co so:";
	}
};

class kethua :public coso
{
public:
	void display()
	{
		cout << "\n  Trung bay lop ke thua:";
	}
	void show()
	{
		cout << "\n  Hien thi lop ke thua:";
	}
};

int main()
{

	coso obj1;
	coso *p;
	cout << "\n\t P tro toi lop co so:\n";

	p = &obj1;
	p->display();
	p->show();

	cout << "\n\n\t P tro toi lop ke thua:\n";
	kethua obj2;
	p = &obj2;
	p->display();
	p->show();
	system("pause");
	return 0;
}