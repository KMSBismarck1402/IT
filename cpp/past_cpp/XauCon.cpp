#include <iostream>
using namespace std;

void solve()
{
    string s;
    int n,i,m=0,a=0,d=0;
    cin>> s;
    n=s.length();
    for(i=0;i<n;i++)
    {
        a++;
        if (s[i]==s[0] || s[i]==s[n - 1])
            a = 0;
        m = max(m,a);
        d = max(d,m);
    }
    if(d==0)
        cout<< -1;
    else
        cout<< d;
    cout <<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
        solve();
}
