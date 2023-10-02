#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

void solve()
{
    long long c=0,d=0;
    int n,i;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    cout << ll(a[0])*ll(a[0]) <<" "<<ll(a[n-1])*ll(a[n-1]) <<"\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
