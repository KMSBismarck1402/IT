#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
    freopen("CARGROUP.INP","r",stdin);
    freopen("CARGROUP.OUT","w",stdout);
    double ans;
    int i=1,n,m,h,j,k=1,o,p,u,v,mn,mx,s;
    int trace[1001];
    cin>>n>>m>>h;
    cin>>o>>p;
    while(i<=n)
    {
        u=o,v=p,mn=p;
        mx=v+u;
        s=o;
        while(cin>>o>>p &&s+o<=m&&(p>=v || o+p <=mx))
        {
            i++;
            s+=o;
            if (p<mn)
                mn=p;
        }
        ans+=h/mn;
        trace[k]=i;
        i++;
        k++;
    }
    cout<<fixed<<setprecision(2)<<ans<<"\n";
    for(j=1;j<k;j++)
    cout<<trace[j]<<" ";

}

/*
10 100 100
40 25
50 20
50 20
70 10
12 50
09 70
49 30
38 25
27 50
19 70
*/
