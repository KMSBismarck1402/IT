#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,l,r,k,i,d=0,o,p;
    cin >> n >> l >> r >> k;
    int *a = new int[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    i=0;
    while(a[i]<l)
        i++;
    o = i;
    while(a[i]<=r&&i<n)
        i++;
    p = i;
    i=o;
    while(k>0 && i<p)
    {
        k-=a[i];
        d++;
        i++;
    }
    if(k<0)
        d--;
    cout << d<<"\n";
    delete []a;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    int t;
    cin >> t;
    while (t-- )
        solve();
    return 0;
}

/*
5
1 1 1 1
1
6 3 5 10
1 2 3 4 5 6
3 1 50 100
50 100 50
5 3 6 22
1 2 5 3 4
8 3 5 100
3 3 3 3 5 5 5 5
*/
