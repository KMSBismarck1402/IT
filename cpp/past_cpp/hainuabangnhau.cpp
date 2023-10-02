#include <iostream>
using namespace std;

int main()
{
    int a , b , c , d, e ;
    cout << "nhap 1 so nguyen ";
    cin >> a;
    b = a ;
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
        cout << " so " << b << " ko phai la so co 2 nua bang nhau ";
    else
        cout << "so " << b << " la so co nua bang nhau";
    return 0;
}
