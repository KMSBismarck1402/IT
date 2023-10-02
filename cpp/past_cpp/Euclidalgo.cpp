#include <bits/stdc++.h>
using namespace std;

int eual(int a, int b, int *m, int *n)
{
    if(a==0)
    {
        *m= 0;
        *n= 1;
        return b;
    }
    int x, y;
    int d = eual(b%a, a, &x, &y);
    *m = y - (b/a) * x;
    *n = x;
    return d;
}

int gcd(int a, int b)
{
    if(b==0)
        return a;
    return (b,a%b);
}

void solve()
{
    int a,b,m,n;
    cin >> a >> b;
    eual(a,b,&m,&n);
    cout << m << " "<< n <<"\n";
}

int main()
{
    int t;
    cin >> t;
    while (t-- )
        solve();
    return 0;
}
