#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,x,i,q,k;
    cin >> n;
    vector<int> dp;
    cin >> x;
    dp.push_back(x);
    for(i=1;i<n;i++)
    {
        cin >> x;
        if(x > dp.end()[-1])
            dp.push_back(x);
        else
            *lower_bound(dp.begin(), dp.end(), x) = x;
    }
    cout << dp.size()<< "\n";
    cin >> q;
    for(i=0;i<q;i++)
    {
        cin >> k;
        cout << dp[k]<<" ";
    }
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t;
//    cin >> t;
    t=1;
    while(t--)
        solve();
}

/*
5
8 -6 1 -5 10
5
0 1 2 3 4
*/
