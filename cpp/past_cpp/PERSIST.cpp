#include <bits/stdc++.h>
using namespace std;

int tsts(int a)
{
    int s;
    s=1;
    while (a >= 1)
    {
        s *=(a%10);
        a/=10;
    }
    return s;
}

int main ()
{
    int a,i,x,z,d;
    cin >> a;
    for (i=10 ; i<= a; i++)
    {
        z=0;
        x=i;
        while(x>=10)
        {
            x=tsts(x);
            z+=1;
        }
        if(i=10){d=z;}
        if((i>10) && (z > d))
        {
            d = z;
        }
    }
    cout << d;
}
