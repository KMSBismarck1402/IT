#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("EXP.INP","r",stdin);
    freopen("EXP.OUT","w",stdout);
    int s,n, i, x, y; long m = -10000, l = 10000, d=0;
    cin >> n;
    int a[5000], b[5000];
    if(n%2 == 0)
    {
        s = n/2;
    }
    if(n%2 != 0)
    {
        s = n/2+1;
    }
    for(i = 0; i < s; ++i)
    {
        cin >> a[i];
        if (a[i] < l)
            {l = a[i]; x=i;}
        if ((n % 2 == 1) && (i == s - 1))
        break;
        else
        cin >> b[i];
        if (b[i] > m) {m = b[i]; y=i;}
    }
    a[x] = m; b[y] = l;
    for(i = 0; i < s; ++i)
    {
        if ((n % 2 == 1) && (i == s - 1))
            d += a[i];
        else
            d += a[i] - b[i];
    }
    cout << d;
    return(0);
}
