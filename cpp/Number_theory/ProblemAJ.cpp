#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(NULL);cin.tie(0);cout.tie(0);
    int m=2000;
    int t,n,i,j;
    int *a=new int[m+1];
    int *b=new int[m+1];
    cin>>t;
    while(t--)
    {
        cin>>n;
        vector<int>even,odd;
        for(int i=0; i<n*2; i++)
        {
            cin>>a[i];
            if(a[i]%2 == 0)
                even.push_back(i+1);
            else
                odd.push_back(i+1);
        }
        vector<pair<int,int>> ans;
        for(i=0; i+1<even.size(); i+=2)
            ans.push_back({even[i],even[i+1]});
        for(i=0; i+1<odd.size(); i+=2)
            ans.push_back({odd[i],odd[i+1]});
        for(int i=0; i<n-1; i++)
            cout<<ans[i].first<<" "<<ans[i].second<<endl;
    }
    delete[]a;
    delete[]b;
}