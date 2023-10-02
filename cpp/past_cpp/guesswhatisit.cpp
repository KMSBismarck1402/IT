#include <bits/stdc++.h>
using namespace std;

struct ps
{
    int tu ;
    int mau;
    };
ps a,b,c;
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
void xps()
{
    cout << a.tu <<"/"<< a.mau;
    cout << b.tu <<"/"<< b.mau;
}



void tps (struct a , struct b)
{
    c.tu = a.tu*b.mau + b.tu*a.mau;
    c.mau = a.mau*b.mau;
    int uc = ucln(c.tu,c.mau)
    return c.tu/uc; return c.mau/uc;
}

int main ()
{
    cin >> a.tu >> a.mau;
    cin >> b.tu >> b.mau;
    tps(a,b);



}
