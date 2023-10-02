#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int sosanh(int a,int b)
{
    return a>b;
}

void solve()
{
    int n,i,k,d;
    cin >> n >> k;
    d=k-1;
    ull *a = new ull [n];
    for(i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n,sosanh);
    while(a[d] == a[d+1])
        d++;
    d++;
    cout << d<<endl;
    delete[] a;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t)
    {
        t--;
        solve();
    }
}

/*
2
5 1
3 5 2 4 5
6 4
6 5 4 3 2 1
*/
