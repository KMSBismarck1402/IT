#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i;
    string s,s1="(";
    cin >> n;
    for(i=0;i<n;i++)
        s=s+s1;
    s1=")";
    for(i=0;i<n;i++)
        s=s+s1;
    cout << s<<"\n";
    s1=s;
    for(i=1;i<n;i++)
    {
        s.replace(i,1,")");
        s.replace(2*n-i-1,1,"(");
        cout << s<<"\n";
        s=s1;
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

/*
3
1
2
3
*/
