#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int m=0,n,i,d,s,f,ans,x;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n,greater<int>());
    i=0;
    while(i<n)
    {
        d=0;
        while(a[i]==a[i+1])
        {
            d++;
            i++;
        }
        s=n-i+d;
        f=ceil(s/a[i-1]);
        m=max(m,f);
    }
    cout << m << "\n";

    long long s;
    int a[n+1] ={0};
    cin >> x;
    m = a[x] =1;
    for(i=0;i<n;i++)
    {
        cin >> x;
        a[x]++;
        if(x>m) m=x;
    }
    s = ans = a[1];
    for(i=2;i<=m;i++)
    {
        s+=a[i];
        ans = max(ans,int((s+i-1)/i));
    }
    cout << ans <<"\"n;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

/*
3
2
2 1
3
2 2 1
5
1 2 3 2 2
*/
