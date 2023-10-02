#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,d;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    d=n/2;
    i=d-1;
    while(a[i]==a[d])
        i--;
    i++;
    cout << n-i << "\n";
}

int main()
{
    freopen("AverageFlex.inp","r",stdin);
    freopen("AverageFlex.out","w",stdout);
    int t;
    cin >> t;
    while(t--)
        solve();
}