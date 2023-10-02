#include<bits/stdc++.h>
using namespace std;

int n,k, a[100005];

bool kt(int x)
{
    int d=0;
    for(int i=0; i<n; i++)
        d+=a[i]/x;
    return d>=k;
}

int main()
{
    freopen("WIRES.inp","r",stdin);
    freopen("WIRES.out","w",stdout);
    int l=1,r=0;
    cin>>n>>k;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        r=max(r, a[i]);
    }
    while(l<=r)
    {
        int mid=(l+r)/2;
        if(kt(mid))
            l=mid+1;
        else
            r=mid-1;
    }
    cout<<l-1<<"\n";
}

/*
4 11
802
743
547
539
*/
