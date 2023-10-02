#include <iostream>
using namespace std;
int hnbn(long a)
{
    long c , d , e ;
    if (a < 0)
        a = a - 2*a;
    c = 1;
    d = a;
    e = 0;
    while (d > e && d > c )
    {
        c = c * 10;
        d = a / c;
        e = a % c ;
    }
    if (d != e)
        return 1;
    else
        return 2;
}
int main()
{
    long x ;
    cout << "nhap 1 so nguyen ";
    cin >> x;
    if (hnbn(x) == 1)
        cout << "so " << x << " ko phai la so co 2 nua bang nhau ";
    if (hnbn(x) == 2)
        cout << "so " << x << " la so co nua bang nhau";
    return 0;
}
