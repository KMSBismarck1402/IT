#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    long a , b , c, s ,i,j,n,f;
    cout << "nhap vao 1 so nguyen random " ;
    cin >> a;
    b = a;
    s=1;
    c=1;
    j = 10;
    n = b;
    f = 0;
    while (a > 10)
    {
        a = a/10 ;
        s = s+1;
    }
    cout << s << " ";
    for (i = 2 ; i < s ; i++)
    {
        j = j*10;
    }
    cout << j << " " << b << " " ;
    for (i = 0 ; i < s;i ++)
    {
    c = b % 10;
        cout << c << " ";
    if ((b % 2) == 0)
    {
        f = f*10;
        b = b -c;
        f = c +f;
    }
    if ((b % 2) != 0)
    {
        a = (b/10) + j*c ;}

    cout << j* c << " "<< b/10 << " ";
    cout << a << " " ;
    b = a;
    cout << "b = "<< b << " ";
    }
    b = b + f;
    cout << b;
}
