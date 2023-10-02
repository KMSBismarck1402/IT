#include <bits/stdc++.h>
using namespace std;

void snt(bool b[], int n)
{
    int i,j,m;
    b[0]=b[1]=true;
    m=sqrt(n);
    for(i=2;i<=m;++i)
        if(b[i]==false)
            for(j=i;j<=n/i;++j)
                b[j*i]=true;
}

int main()
{
    freopen("supprime.inp","r",stdin);
    freopen("supprime.out","w",stdout);
    int m=35000,n,d=0,i,j=0;
    cin >> n;
    bool b[m]={false};
    snt(b,m);
    int a[m+1]={0};
    for(i=2;i<=m;i++)
        if(!b[i])
            a[j++]=i;
    for(i=0;i<j;i++)
        if(!b[i])
        {
            d++;
            if(d==n)
            {
                cout << a[i-1]<<"\n";
            }
        }
}

