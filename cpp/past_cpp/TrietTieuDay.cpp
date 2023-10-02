#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,x=0;
    cin >> n;
    int *a = new int[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=0;i<n;i++)
        x |= a[i];
    cout << __builtin_popcount(x)<<"\n";
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
4
3
4 4 4
4
2 2 4 16
3
1 3 5
3
1 4 5
*/
