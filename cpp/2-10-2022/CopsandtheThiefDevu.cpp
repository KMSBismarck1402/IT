#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int m,x,y,n,i,bt,tp,cnt=0;
    cin >> m >> x >> y;
    int a[m];
    bool b[101] = {false};
    for (i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for(i=0;i<m;i++)
    {
        bt = max(a[i]-x*y,1);
        tp = min(a[i]+x*y,100);
        for(n=bt;n<=tp;n++)
            b[n]=true;
    }
    for(i=1;i<=100;i++)
    {
        if(b[i]==false)
            cnt++;
    }
    cout << cnt << "\n";
    
}

int main()
{
    freopen("cattd.inp","r",stdin);
    freopen("cattd.out","w",stdout);
    int t;
    cin >> t;
    while(t--)
        solve();
}