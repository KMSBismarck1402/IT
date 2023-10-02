#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,s,i,mn=1000,mx=1,p1,p2,lp,up;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]>mx)
        {
             mx=a[i];
             p2=i;
        }
        if(a[i]<mn)
        {
            mn=a[i];
            p1=i;
        }
    }
    if(p1>p2)
        lp=p2, up=p1;
    else
        lp=p1, up=p2;
    cout << min({lp+1+n-up, up+1,n-lp}) << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t--)
       solve();
}
