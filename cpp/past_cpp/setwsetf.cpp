#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a,b, c ,c1,d=1,dem=0;
    cin >> a;
    while (a>0)
    {
        b = a%2;
        c+= b*d;
        d+=10;
        a/=2;
    }
    c1=c;
    while (c1 >0)
    {
        c1/=10;
        dem +=1;
    }
    for (c1= 1; c1 <=32 -dem;c1++)
    {
    cout << c;
}
