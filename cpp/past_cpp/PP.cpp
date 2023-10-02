#include <bits/stdc++.h>
using namespace std;

int sd(int x)
{
    if(x==1)
        return 0;
    int d=1,i,n;
    n=sqrt(x);
    for(i=2;i<=n;i++)
        if(x%i==0)
        {
            d+=i;
            if(x/i!=i)
                d+=x/i;
        }
    return d;
}

int main()
{
    freopen("pp.inp","r",stdin);
    freopen("pp.out","w",stdout);
    int l,r,i,d=0;
    cin >> l >> r;
    for(i=l;i<=r;i++)
        if(sd(i)>i)
            d++;
    cout << d;
}
