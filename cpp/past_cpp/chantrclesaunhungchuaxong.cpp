#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    long a , b , c, s ,i,j,n,f,k;
    cout << "nhap vao 1 so nguyen random " ;
    cin >> a;
    b = a;
    s=1;
    c=1;
    j = 10;
    n = b;
    f = 0;
    k = 0;
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
        a=b;
    if ((b % 2) != 0)
    {
        b = (b/10) + pow(10,s-1-k)*c ;
        cout << b << " " ;}
    if ((a % 2) == 0)
    {if (k = 0){
        b = (b - c)/10;
        cout << b << " ";
        f = f + c;
        k = k+1;
        cout << "tam ngung ";}
        if (k != 0){
        b = (b - c)/10;
        cout << b << " ";
        f = f + c*pow(10,k);
        k = k+1;
        cout << "tam ngung ";}
    }
    cout << j* c << " "<< b/10 << " ";
    cout << b << " " ;
    cout << "b = "<< b << " ";
    }
    b = b*pow(10,k) + f;
    cout << b;
}
