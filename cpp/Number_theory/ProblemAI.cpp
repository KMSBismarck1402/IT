#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t,ans,n,x,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int> v(1001);
        for(i=0;i<n;i++)
        {
            cin>>x;
            v[x] = i+1;
        }
        ans=-1;
        for(i=1000;i>0;i--)
        {
            for(j=i;j>0;j--)
            {
                if(v[i] && v[j] && gcd(i,j)==1)
                    ans = max(ans,v[i]+v[j]);
            }
        }
        cout<<ans<<"\n";
    }
}