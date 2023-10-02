#include <bits/stdc++.h>
using namespace std;

int sosanh(int a,int b)
{
    return a>b;
}

void solve()
{
    int n,i,k,d;
    cin >> n >> k;
    int *a = new int [n];
    for(i=0;i<n;i++)
        cin >> a[i];

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
