#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,r,i,d=0,j;
    cin >> n;
    int *a = new int[n];
    vector< vector<int>> v(n,vector<int>(n,0));
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        v[a[i]].push_back(i);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cout << v[i][j]<<" ";
        cout << "\n";
    }
    delete[]a;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

/*
2
3
2 1 1
6
6 3 4 1 6 5
*/
