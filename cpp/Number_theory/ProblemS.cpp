#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

ll sum(int a[],int id)
{
    ll s = 0;
    while(id>0)
    {
        s+=a[id];
        id-=(id&(-id));
    }
    return s;
}

void update(int b[],int n,int id,int val)
{
    while(id<=n)
    {
        b[id]+=val;
        id+=(id&(-id));
    }
}
 
void convert(int a[],int n)
{
    int *b = new int[n];
    for(int i=0;i<n;i++)
        b[i] = a[i];
    sort(b,b+n);
    for(int i=0;i<n;i++)
        a[i] = lower_bound(b,b+n,a[i]) - b + 1;
}
 
int main()
{
    int t,n,i;
    ll ans;
    cin>>t;
    while(t--)
    {
        ans=0;
        cin>>n;
        int *a = new int[n];
        for(i=0;i<n;i++)
            cin>>a[i];
        convert(a,n);
        int *b = new int[n+1]{0};
        for(i= n-1 ; i>=0; i--) 
        {
            ans += sum(b,a[i]);
            update(b,n,a[i],1);
        }
        cout << ans <<"\n";
        delete []a;
        delete []b;
    }
}