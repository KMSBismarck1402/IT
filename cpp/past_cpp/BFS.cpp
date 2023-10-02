#include <bits/stdc++.h>
using namespace std;

int n,m, u,v,s;
int a[101][101] = {0};
bool trace[101];
queue <int> q;

void BFS(int s)
{
     q.push(s);
     trace[s]=0;
     while (!q.empty())
     {
        int u = q.front();
        q.pop();
        cout << u << endl;
        for (int v=1; v<=n; v++)
            if (trace[v] && a[u][v]==1)
            {
                trace[v] = 0;
                q.push(v);
            }
     }
}

int main()
{
    cin >> n >> m>> s;
    for (int i=1; i<=m; i++)
    {
        cin >> u>> v;
        a[u][v]=1;
        a[v][u]=1;
    }
    for (int i=1; i<=n; i++)
        trace[i]=1;
    BFS(s);
    return 0;
}
