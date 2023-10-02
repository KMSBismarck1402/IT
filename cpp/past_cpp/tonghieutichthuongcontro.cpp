#include <bits/stdc++.h>
using namespace std;

void ps(int a , int b)
{
    double x;
    x = a/b;
    cout << x;
}
void tong (int , int b , int c , int d)
{
    double x;
    x = ps(a,b);
    double y;
    y= ps(c,d)
    cout << x+y;
}

void hieu(int a , int b , int c , int d,*)
{
    double x = ps(a,b);
    double y = ps(c,d);
    cout << x-y;
}

void tich (int *a , int *b ,int *c,int *d)
{
    double x = ps(a,b);
    double y = ps(c,d);
    cout << x*y;
}

void thuong(int *a , int *b , int *c , int *d)
{
    double x = ps(a,b);
    double y = ps(a,b);
    cout << x/y;
}

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c>> d;
    cout << tong(a,b,c,d);
    cout << hieu(a,b,c,d);
    cout << tich(a,b,c,d);
    cout << thuong(a,b,c,d);
}
