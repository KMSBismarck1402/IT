#include <iostream>
#include <math.h>
using namespace std;

int main ()
{
    long a,b,s,d,e;
    int c[1000];
    cout <<"nhap vao so a ";
    cin >> a;
    b=a;
    s=1;
    while (a > 10)
    {
        a = a/10;
        s = s+1;
    }
    for(int i = 1; i <= s;i++)
    { d = (pow(10,(s-i)) );
    e = b/d;
        c[i] = (b-(b % d))/d;
        b = b - d*e;}
    for (int i =1;i <=s;i++)
    {cout << c[i] << " ";}
}
