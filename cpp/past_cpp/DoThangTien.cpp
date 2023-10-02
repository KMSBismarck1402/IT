#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,d,m;
    cin >> n;
    int a[n],b[n],f[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    b[0]=a[0];
    for(i=1;i<n;i++)
        b[i]=min(b[i-1],a[i]);
    f[n-1]=a[n-1];
    for(i=n-2;i>=0;i--)
        f[i]=max(f[i+1],a[i]);
    d=0;
    for(i=1;i<n;i++)
        d=max(d,f[i]-b[i-1]);
    if(d==0)
        d=-1;
    cout << d<<"\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

/*
2
5
3 1 2 5 3
4
6 5 3 3
*/
