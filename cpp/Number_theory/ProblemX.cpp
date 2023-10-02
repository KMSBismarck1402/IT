#include <bits/stdc++.h>
using namespace std;
#define mx 1000000
#define ll long long

vector<int> v;
bool p[mx+10];
void snt()
{
    for(int i=0; i<=mx; ++i)
        p[i]=true;
    p[0]=false, p[1]=false;
    for(int i=4; i<=mx; i+=2)
        p[i]=false;
    for(int i=3; i<=mx; i+=2)
        for(int j=i; j<=mx/i; j+=2)
            p[i*j]=false;
    for(int i=2; i<=mx; ++i)
        if(p[i])
            v.push_back(i);
}

void solve(int a, int b)
{
    int s=0;
    map<int, int> ma, mb;
    set<int>::iterator it;
    set<int> ans;
    for(int i=0; i<v.size(); ++i)
    {
        while(a%v[i]==0)
        {
            ma[v[i]]++;
            a=a/v[i];
            ans.insert(v[i]);
        }
        if(a==1) 
            break;
        if(p[a])
        {
            ma[a]++;
            ans.insert(a);
            break;
        }
    }
    for(int i=0; i<v.size(); ++i)
    {
        while(b%v[i]==0)
        {
            mb[v[i]]++;
            b=b/v[i];
            ans.insert(v[i]);
        }
        if(b==1) 
            break;
        if(p[b])
        {
            mb[b]++;
            ans.insert(b);
            break;
        }
    }
    for(it=ans.begin(); it!=ans.end(); it++)
        s+=abs(ma[*it]-mb[*it]);
    cout<<ans.size()<<":"<<s<<"\n";
}

int main()
{
    int a, b, i=0;
    snt();
    while(cin>>a>>b)
    {
        if(a==0 && b==0) 
            break;
        ++i;
        cout<<i<<". ";
        solve(a, b);
    }
}