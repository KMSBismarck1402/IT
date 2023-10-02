#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,m=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        if(i!=0&&i!=n-1)
            m = max(m,a[i]);
    }
    if(m>=max(a[0],a[n-1]))
        cout << -1;
    else
    {
        for(i=n-1;i>=0;i--)
            cout << a[i]<<" ";
    }
    cout << "\n";
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
4
1 3 2 4
1
1
5
1 3 5 4 2
3
3 2 1
*/
