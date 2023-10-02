#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,r,i,d=0;
    cin >> n >> r;
    int *a = new int[n];
    int *b = new int[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=0;i<n;i++)
        cin >> b[i];
    for(i=0;i<n-1;i++)
    {
        d=max(0,d+b[i]-(a[i+1]-a[i])*r);
    }
    if(n>1)
        d+=b[n-1];
    cout << d << "\n";
    delete[]a;delete[]b;
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

/*
3
2 1
3 5
3 4
3 2
4 5 6
4 5 6
3 1
1 2 3
1 2 3

1
3 100
0 1 2
50 20 20
*/
