#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int m,n,a[1000],i,c,b,d;
    cin >> m >> n;
    b=1;
    c=1;
    i=0;
    a[0]=0;
    while (a[i] <= n)
    {
        a[i] = b+c;
        b = c;
        c = a[i];
        i++;
    }
    for (i=i; i <= n ; i++)
    {

    }
}
