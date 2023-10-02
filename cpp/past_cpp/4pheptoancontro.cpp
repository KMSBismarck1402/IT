#include <bits/stdc++.h>
using namespace std;

int tucln(int a , int b )
{
    if (b) return a;
    return (tucln(b,a%b));
}

void rgps(int *pt, int *pm)
{
    int u= tucln(*pt,*pm);
    *pt /=u;
    *pm /=u;
}

void nps(int *pt , int *pm)
{
    cin >> *pt >> *pm;

}

void xps(int t , int m)
{
    cout << t << "/" << m;
}

void tong(int t1 , int t2 , int m1 , int m2 , int *pt , int * pm)
{
    int t = t1 * m2 + t2 * m1;
    int m = m1 * m2;
}
