#include <bits/stdc++.h>
using namespace std;

int tcs(int n)
{
    int s=0;
    for(;n!=0;)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}

int tcstsnt(int n)
{
    int a,i=2,d=0,m;
    m=sqrt(n);
    while(i<=m&&n>1)
    {
        if(n%i==0)
        {
            n/=i;
            d+=tcs(i);
        }
        else
            ++i;
    }
    if(n>1)
        if(d!=0)
            d+=tcs(n);
    return d;
}



int main()
{
    freopen("NSPECIAL.INP","r",stdin);
    freopen("NSPECIAL.OUT","w",stdout);
    int n,i,d=1,s1,s2;
    cin >> n;
    while(d)
    {
        s1=tcs(n);
        s2=tcstsnt(n);
        if(s1==s2)
            d=0;
        else
            n++;
    }
    cout << n;
}

/*
4937770
*/
