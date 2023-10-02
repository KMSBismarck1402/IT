#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a;
    int d=0,m=1;
    cin >> a;
    if(a==1)
    {
        d=0;
        m=0;
    }
    while(m)
    {
        if(a%5==0)
        {
            a=a/5;
            d+=3;
        }
        else if(a%3==0)
        {
            a=a/3;
            d+=2;
        }
        else if(a%2==0)
        {
            a/=2;
            d++;
        }
        else
        {
            if(a!=1)
            d=-1;
            m=0;
        }
        if(a==1)
                m=0;
    }
    cout << d << "\n";
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
14
1
15
*/
