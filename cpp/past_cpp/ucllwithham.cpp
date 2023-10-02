#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if(b==0)
        return a;
    return(b,a%b);
}
int ucln(long a , long b)
{
    long c;
    c = a % b ;
    while (c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}
int bcnn(long a, long b)
{
    return a / ucln(a,b) * b;
}
int main()
{
    long x,y;
    cin >> x >> y ;
    cout  << ucln(x,y) << " "  << bcnn(x,y) ;
    return 0;
}
