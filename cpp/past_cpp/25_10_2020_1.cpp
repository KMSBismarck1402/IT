#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,i,b,c,d,e;
    cin >> n;
    int a[n];
    for (i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    c = 0;
    d = n-1;
    cin >> b;
    while (c < d)
    {
        e = (c+d)/2;
        if (a[e] < b)
        {
            c = c+
        if (a[e] == b)
        {
            cout <<  "e = " << e;
            return 0;1;
        }
        if (b < a[e])
        {
            d = d-1;
        }
        }
    }
    cout << -1;
    return 1;

}
