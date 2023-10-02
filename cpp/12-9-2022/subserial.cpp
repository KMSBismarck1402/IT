#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    int n,a[100005],s;
    cin>>n;
    for (int i=1;i<=n;i++)
        cin>>a[i];
    cin>>s;
    a[n+1]=s;
    int d=0,ans=-1;
    for(int i=1;i<=n+1;i++)
    {
        if(d+a[i]>s)
        {
            if(d==s)
                ans=max(ans,i-q.front());
            while(d+a[i]>s)
            {
                d-=a[q.front()];
                q.pop();
            }
        }
        d+=a[i];
        q.push(i);
    }
    cout<<ans;
}
