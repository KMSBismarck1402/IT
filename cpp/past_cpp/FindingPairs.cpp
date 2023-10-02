#include <bits/stdc++.h>
using namespace std;

vector<int>a[100001];
int v[100001];
int e[100001];

void dfs(int s)
{
    v[s]=1;
    for(int i=0;i<a[s].size();i++)
    {
        if(v[a[s][i]]==0)
        {
            e[a[s][i]]==e[s]+1;
            dfs(a[s][i]);
        }
    }
}

int main()
{
    int n,r=0,i;
    cin >> n;
    for(i=0;i<n;i++)
    {
        int x,y;
        cin >> x>>y;
        a[x].push_back(y);
        a[y].push_back(x);
    }
    e[1]=1;
    dfs(1);
    for(int i=1;i<=n;i++)
        r+=e[i];
    cout << r;
    return 0;
}
