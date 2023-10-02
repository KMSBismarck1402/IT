#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("MAEXP.INP","r",stdin);
    freopen("MAEXP.OUT","w",stdout);
    int n,i,x,c=1;
    long long d=0,m=0,md=1e9+9;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> x;
        if(x==1)
        {
            d+=m+1;
            m=0;
            c=1;
        }
        else if(c==1)
        {
            m=x;
            c=0;
        }
        else
            m*=x;
    }
    if(c==0)
        d+=m;
    cout << d%1000000009;
}

/*
13
1 1 4 7 1 1 1 1 5 3 1 1 1
5
4 7 1 5 3
*/
