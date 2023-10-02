#include <bits/stdc++.h>
using namespace std;

struct phanso
{
    int tu;
    int mau;
};

phanso a,b, tong;

void nhapps(phanso &a)
{
    cin>>a.tu;
    cin>>a.mau;
}
void xuatps(phanso a)
{
	cout<<a.tu<<"/"<<a.mau;
}
int ucln(int a, int b)
{
    int r;
    while (a%b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return b;
}
void tongps(phanso a , phanso b)
{
    tong.tu = a.tu*b.mau + a.mau*b.tu;
    tong.mau = a.mau*b.mau;
    int UC = ucln(tong.tu,tong.mau);
    cout << tong.tu/UC << "/"<< tong.mau/UC << endl;
}
void hieups(phanso a , phanso b)
{
    tong.tu = a.tu*b.mau - a.mau*b.tu;
    tong.mau = a.mau*b.mau;
    int UC = ucln(tong.tu,tong.mau);
    cout << tong.tu/UC << "/"<< tong.mau/UC<<endl;
}
void tichps(phanso a , phanso b)
{
    tong.tu = a.tu*b.tu;
    tong.mau = a.mau*b.mau;
    int UC = ucln(tong.tu,tong.mau);
    cout << tong.tu/UC << "/"<< tong.mau/UC<<endl;
}
void thuongps(phanso a , phanso b)
{
    tong.tu = a.tu*b.mau;
    tong.mau = a.mau*b.tu;
    int UC = ucln(tong.tu,tong.mau);
    cout << tong.tu/UC << "/"<< tong.mau/UC<<endl;
}
void xuatps()
{
    cout << a.tu <<"/"<< a.mau;
    cout << b.tu <<"/"<< b.mau;
}
int main( )
{
    nhapps(a);
    nhapps(b);
    tongps(a,b);
    hieups(a,b);
    tichps(a,b);
    thuongps(a,b);
}
