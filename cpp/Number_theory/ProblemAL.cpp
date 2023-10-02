#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(NULL);cin.tie(NULL);cout.tie(NULL);
    int n,m,i,j;
    ll ans =1;
    cin>>n>>m;
    ll *a = new ll[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    if(n>m)
        ans=0;
    else
    {
        for(i=0;i<n;i++)
        {
            for(j=0; j<i; j++)  
            {
                ans*=abs(a[i]- a[j])%m;
                ans%=m;
            }
        }
    }
    cout << ans;
}