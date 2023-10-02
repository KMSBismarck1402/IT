#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

void solve()
{
    int t,n,m,x,y,d,o;
    ull s,p;
    cin >> n >> m >> x >>y;
    p=min(x*2,y);
    d=min(n,m);
    s=(d-1)*p;
    o=max(m-d,n-d);
    if(o%2)
    {
        o--;
        s=s+(o/2*min(x*2,y*2))+x;
    }
    else
        s=s+(o/2+d-1)*min(x*2,y*2);
    cout << s << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin >> t;
    while (t )
    {
        solve();
        t--;
    }
}
