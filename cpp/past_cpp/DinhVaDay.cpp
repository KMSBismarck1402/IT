#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,t,l,m;
    cin >> n >> m;
    if(n < m)
    {
        t = 1;
        swap(n,m);
    }
    if(n == m)
    {
        l = n + m + 2;
        int kk = 3*(n-m-1);
        cout << l << "\n";
        cout << t;
        for(i=0;i<kk;i+=3)
            cout << 1-t << t << t;
        t = 1-t;
        for(++i; i < l ; i++, t=1-t)
            cout << t;
    }
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t-- )
        solve();
}
