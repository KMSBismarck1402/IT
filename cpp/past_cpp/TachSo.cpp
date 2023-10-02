#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin >> s;
    int d,i,l = s.length()-1;
    if((s[l]-'0')%2==0)
        d=0;
    else
        d=1;
    for(i=0;i<l;i++)
    {
        if((s[i]-'0') % 2 == d)
        {
            cout << "YES" << "\n";
            return;
        }
    }
    cout << "NO" << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        solve();
}

/*
2
30
24127
*/
