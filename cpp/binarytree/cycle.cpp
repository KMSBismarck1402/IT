#include <bits/stdc++.h>
using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
	adj[u].push_back(v);
	adj[v].push_back(u);
}

void printGraph(vector<int> adj[], int V)
{
	for (int v = 0; v < V; ++v) {
		cout << "\n Adjacency list of vertex " << v
			<< "\n head ";
		for (auto x : adj[v])
			cout << "-> " << x;
		printf("\n");
	}
}

int main()
{
	int n,i,u,v;
	cin>>n;
	vector<int> adj[n];
	for(i=0;i<n;i++)
    {
        cin >> u>>v;
        addEdge(adj,u,v);
    }
    printGraph(adj,n);


}

/*
7
1 2
1 3
2 4
2 5
3 6
3 7
*/
