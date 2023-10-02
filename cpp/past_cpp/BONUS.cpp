#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    freopen("bonus.inp","r",stdin);
    freopen("bonus.out","w",stdout);
    int n,i,oi,c,d;
    ll s,s1=0,m=1e9;
    cin>>n;
    int *a = new int[n+1];
    for(i=0;i<n;i++)
        cin>>a[i];
    s=accumulate(a,a+n,s1);
    sort(a,a+n);
    for(i=0;i<n;i++)
    {
        c=1;
        oi=i;
        while(a[i]==a[i+1])
            i++;
        cerr << (i-oi+1)*a[i] <<"\n";
        m=min(m,(i-oi+1)*ll(a[i]) );
    }
    cout<<s-m;
    delete[]a;
}

/*
5
1 6 2 1 1
*/
