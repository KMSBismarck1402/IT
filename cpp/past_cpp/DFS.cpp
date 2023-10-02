#include <bits/stdc++.h>
using namespace std;

int a[101][101]={0};
int n, m, u, v, s,i;
bool trace[101];

void DFS(int u)
{
    cout << u << endl;
    trace[u] = 0;
    for (int v = 1; v <= n; v++)
        if (a[u][v] == 1 && trace[v] )
            DFS(v);
}

int main()
{
    cin >> n >> m >> s;
    for (i=1; i<= m; i++)
    {
        cin >> u >> v;
        a[u][v] = 1;
        a[v][u] = 1;
    }
    for (i=1; i<=n; i++)
        trace[i]=1;
    DFS(s);
    return 0;
}
