#include <bits/stdc++.h>
using namespace std;

struct phanso
{
    int tu[100];
    int mau[100];
};

phanso a;
struct ps
{
    int tu;
    int mau;
};

ps b , c , d;
void nhapps(phanso &a,int b)
{
    for (int i = 0 ; i< b ; i++)
    {
        cin>>a.tu[i];
        cin>>a.mau[i];
    }
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
void xuatps(phanso a)
{
	cout<<a.tu<<"/"<<a.mau;
}
void xdgtps(phanso &a, int e)
{
    int i = 0;
    if (i = 0)
    {
        b.tu = a.tu[i];
        b.mau = a.mau[i];
        c.tu = a.tu[i];
        c.mau = a.mau[i];
    }
    for (i = 0;i<e;i++)
    {
        if (a.tu[i]/a.mau[i] < b.tu/b.mau);
        {b.tu = a.tu[i];
        b.mau = a.mau[i];}
        if (a.tu[i]/a.mau[i ] > c.tu/c.mau)
        {
            c.tu = a.tu[i];
            c.mau = a.mau[i];
        }
        d.tu = d.tu + a.tu[i];
        d.mau = d.mau + a.mau[i];
    }
    int uc = ucln(d.tu,d.mau);
    cout << "be nhat la : "<<b.tu<<"/"<<b.mau<< " , lon nhat la "<<c.tu<<"/"<<c.mau<<" , trung binh la " << d.tu/uc<<"/"<<d.mau/uc;
}
int main( )
{
    int n;
    cin >> n;
    nhapps(a,n);
    xdgtps(a,n);

}
