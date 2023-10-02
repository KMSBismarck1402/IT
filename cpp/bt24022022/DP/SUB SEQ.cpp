#include <bits/stdc++.h>
using namespace std;

int n,k;int nm= 1001,fm=1001;int a[1001];int f[1001][1001];

int Sub(int x, int y)
{
    int tmp=(x-y)%k;
    if(tmp>=0)
        return tmp;
    return tmp+k;
}

int main()
{
 //   freopen("SUBSEQ.INP", "r", stdin);
   // freopen("SUBSEQ.OUT", "w", stdout);
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int i,d=0,j,sa,t;
    cin >> n >> k;
    for(int i=1;i<=n;i++)
        cin >> a[i];
    for(int i=1;i<=k-1;i++)
        f[0][i] = 1000;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<=k-1;j++)
        {
            if (f[i - 1][j] < f[i - 1][Sub(j, a[i])] + 1)
                f[i][j] = f[i - 1][j];
            else
                f[i][j] = f[i - 1][Sub(j, a[i])] + 1;
        }
    }
    for(i=1;i<=n;i++)
        sa+=a[i];
    cout<<n-f[n][sa%k]<<"\n";
    t=sa%k;
    for(i=n;i>=1;i--)
    {
        if(f[i][t] == f[i - 1][t])
        {
            cout << "a[" << i << "] = " << a[i] <<"\n";
            d+=a[i];
        }
        else
            t=Sub(t, a[i]);
    }
    cout<<d;
}

/*
10 5
1 6 11 5 10 15 20 2 4 9
*/
