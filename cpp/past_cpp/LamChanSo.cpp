#include <bits/stdc++.h>
using namespace std;

int scs(int n)
{
    int i=0;
    while(n>0)
    {
        n/=10;
        i++;
    }
    return i;
}
void solve()
{
    int n,i,b,d=0;
    cin >> n;
    b=n;
    if(n%2==0)
        cout << 0;
    else
    {
        for(i=0;i<(scs(b)-1);i++)
        {
            if(n%2==0)
                d=2;
            n/=10;
        }
        if(n%2==0)
            d=1;
        if(d==2)
            cout << 2;
        if(d==0)
            cout << -1;
        if(d==1)
            cout << 1;
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}
