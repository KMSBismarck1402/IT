#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a,b,c;
    cin >> n >> a >> b >> c;
    int k[3];
    k[0] = a; k[1] = b; k[2] = c;
    sort(k,k+3);
    a = k[0]; b = k[1]; c = k[2];
    cout << a*(n-1) + b;
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}
