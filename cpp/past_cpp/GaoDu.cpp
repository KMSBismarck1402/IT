#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k,i,d;
    long long ans =0;
    cin >> n >> k;
    for(i=0;i<n;i++)
    {
        cin >> d;
        ans+=(d%k);
    }
    cout << ans%k << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}
