#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,k,l,h,m=0,a;
    cin >> n >> k >> l;
    for (i=0;i<n-1;i++)
    {
        cin >> a;
        if(a > m)
            m=a;
    }
    cin >> h;
    if(k<=0)
            if(h>m)
                cout << "YES\n";
            else cout << "NO\n";
        else if(h+k*(l-1)>m)
                cout << "YES\n";
            else cout << "NO\n";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t )
    {
        solve();
        t--;
    }
}
