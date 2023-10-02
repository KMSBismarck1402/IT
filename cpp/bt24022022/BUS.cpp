#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    freopen("BUS.INP","r",stdin);
    freopen("BUS.OUT","w",stdout);
    const int  T = 250000;
    int n, m, t, k, i, j, a[T], p, x, ans;
    cin >> n >> m;
    int *f = new int [n];
    f[0] = 0;
    p = 0;
    for(i =0;i<n;i++)
    {
        cin >> t >> k;
        f[i + 1] = f[i] + t;
        for(j = p; j <p + k; j++)
        {
            cin >> x;
            a[j] = max(0, x - f[i]);
        }
        p += k;
    }
    sort(a + 1, a + p + 1);
    cerr << f[n] <<" ";
    for(i=0;i<=m;i++)
        cerr<<a[i]<<" ";
    ans = f[n] + a[m];
    cout << ans;
    return 0;
    delete[]f;
}

/*
3 5
1 2 0 1
1 1 2
1 4 0 2 3 4
*/
