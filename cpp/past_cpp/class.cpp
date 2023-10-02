#include <bits/stdc++.h>
using namespace std;
#define nl cout << endl

class PS
{
    int tu , mau;
    void RutGon();
public:
    PS(int t , int m) {Set (t,m);}
    void Nhap();
    void Xuat();
    void Set(int t , int m);
    PS Cong(PS b);
};

int uscln(int a, int b)
{
    if (b==0) return abs(a);
    return uscln(b , a%b);
}

void PS::RutGon()
{
    int u = uscln(tu,mau);
    tu /= u;
    mau /= u;
}

void PS::Nhap()
{
    cin >> tu >> mau;
}

void PS::Set(int t , int m)
{
    tu = t;
    mau = m;
    RutGon();
}

void PS::Xuat()
{
    cout << tu << mau;
}

PS::PS Cong(PS b)
{
    /*PS c(0,1);
    c.tu = tu*b.mau + mau*b.tu;
    c.mau = mau*b.mau;
    c.RutGon();
    return c;*/
    return PS (tu*b.mau + mau*b.tu , mau*b.mau)
}

PS::PS Tru(PS b)
{
    return PS(tu*b.mau - mau*b.tu, mau*b.mau)
}

PS::PS Nhan(PS b)
{
    return PS(tu * b.tu, mau *b.mau)
}

PS::PS Chia(PS b)
{
    return PS(tu*b.mau, mau*b.tu)
}

int main()
{
    PS a(5,15),b(3,12);
    /*a.Nhap();
    b.Nhap();*/
    a.Xuat();
    nl;
    b.Xuat();
    PS c = a.Cong(b);
    c.Xuat();
    nl;
    return 0;
}
