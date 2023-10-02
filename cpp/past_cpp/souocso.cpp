#include <iostream>             x
using namespace std;

int main ()
{
    long long  a=2,n,c=0,d=1;
    cout << "nhap vao 1 so random nao do ";
    cin >> n;
    while (n%a ==0)
    {
        c++;
        cout << " c = "<< c;
        n = n/a;
        cout << " n = " << n;
    }
    d = d * (c +1);
    cout << "d = " << d;
    a=3;
    c=0;
    cout << " xong buoc 1 ";
    while (n / a >= a)
    {
        {
            c++;
            cout << " c = " << c;
            n = n/a;
            cout << " n = " << n << " tam xong buoc 2 ";
        }
        d = d*(c+1);
        cout << " d = "<<d;
        a = a+2;
        cout << " a = "<<a << " tam xong buoc 3 ";
        c=0;
    }
    if(n > 1)
        d = d*2;
    cout << d;
    return 0;
}
