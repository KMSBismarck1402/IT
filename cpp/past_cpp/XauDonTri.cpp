#include <bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    int n,i,j,k,ma=0;
    cin >> s;
    n=s.size();
    int b[n],f[n];
    for(i=0;i<n;i++)
        b[i]=f[i]=1;
    for(i=1;i<n;i++)
        if(s[i]==s[i-1])
            b[i] = b[i-1]+1;
    for(i=n-2;i>=0;i--)
        if(s[i]==s[i+1])
            f[i]=f[i+1]+1;
    ma = *max_element(b,b+n);
    for(i=1;i<n-1;i++)
        if(s[i-1]==s[i+1])
            ma = max(ma, f[i+1]+b[i-1]);
    cout << ma <<"\n";
}

int main()
{
    int t;
    string s;
    cin >> t;
    while(t--)
        solve();
}
