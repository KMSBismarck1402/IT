#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    int n[10] = {6,2,5,5,4,5,6,3,7,6};
    cin >> a >> b;
    a+=b; b=0;
    while(a>=1)
    {
        b+=n[a%10];
        a/=10;
    }
    cout << b<<"\n";
}

int main()
{
    freopen("PlayingwithMatches.inp","r",stdin);
    freopen("PlayingwithMatches.out","w",stdout);
    int t;
    cin >> t;
    while(t--)
        solve();
}