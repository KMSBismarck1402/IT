#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,d,n,i;
    cin >> a >> b;
    d = max(a,b) - min(a,b);
    n = d/10;
    if(d%10!=0)
        cout << n+1;
    else
        cout << n;
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}
