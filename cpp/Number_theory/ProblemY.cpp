#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
 
const int n=10000000;
int lp[n];
bool b[n];
ll a[n];
 
int main()
{
    int i,j,t,x;
    ll s=0;
    memset(b,true,sizeof(b));
    for(i=2;i<n;i++)
    {
        if(b[i]==true)
        {
            for(j=i;j<n;j=j+i)
            {
                if(lp[j]==0)
                {
                    lp[j]=i;
                    b[j]=false;
                }
            }
        }
    }
    lp[0]=0;
    lp[1]=0;
    for(i=0;i<n;i++)
    {
        s=s+lp[i];
        a[i]=s;
    }
    cin>>t;
    while(t--)
    {
        cin>>x;
        cout<<a[x]<<endl;
    }
}