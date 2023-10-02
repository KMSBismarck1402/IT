#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s,s1;
    int n,i;
    char c=s[0];
    cin >> s;
    n=s.length();
    for(i=0;i<n-1;i++)
        s1+=c;
    if(s>=s1)
        cout << (n-1)*9+(c-'0');
    else
        cout <<  (n-1)*9+(c-1-'0');
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int t;
    string s;
    cin >> t;
    while(t--)
        solve();
}
