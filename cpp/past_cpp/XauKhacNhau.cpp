#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int i,d=1,l;
    char o,p;
    cin >> l;
    cin >> o;
    for(int i=1;i<l;i++)
    {
        cin >> p;
        if(o!=p)
            d++;
        o=p;
    }
    cout << d << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
}

