#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("BUYGIFTS.INP","r",stdin);
    freopen("BUYGIFTS.OUT","w",stdout);
    int n,m,i,d=1e9;
    cin >> n >> m;
    int *a = new int[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    for(i=0;i<=n-m;i++)
        d=min(d,a[i+m-1]-a[i]);
    cout << d;
    delete[]a;
}

/*
5 3
3 1 4 9 6
*/
