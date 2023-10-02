#include <bits/stdc++.h>
using namespace std;

void sieve(bool b[],int n)
{
    int i,j;
    b[0]=b[1]=false;
    for (i=2;i<=n;i++)
    {
        b[i]=true;
    }
    for(i=2;i<=n;i++)
        if (b[i] && i <= n/i)
            for(j=i*i;j<=n;j+=i)
                b[j] = false;
}

int main()
{
    int n,i,d,ck;
    cin >> n;
    bool b[n];
    sieve(b,n);
    for(i=0;i<n;i++)
    {
        if(b[i])
        {
            ck=0;
            d=i;
            while(d>10)
            {
                d/=10;
                if(!b[d])
                    ck++;
            }
            if(ck==0)
                cout << i << " ";
            ck=0;
        }
    }
}

