#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,d;
    cin >> n;
    int *a = new int[n+2];
    for(i=1;i<=n;i++)
        cin  >> a[i];
    a[0]=0;a[n+1]=1e9;
    i=1;
    if(n%2)
        i=0;
    for(i;i<=n-2;i+=2)
    {
        if(max(a[i],a[i+1]) <= min(a[i+2],a[i+3]) )
            d=1;
        else
            d=0;
    }
    if(d)
        cout << "YES \n";
    else
        cout << "NO \n";
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
3 8 5
3
5 3 1
4
8 6 6 4
4
4 2 6 4
*/
