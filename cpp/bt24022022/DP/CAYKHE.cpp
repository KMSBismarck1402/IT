#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("CAYKHE.INP","r",stdin);
    freopen("CAYKHE.OUT","w",stdout);
    int n,m;
    cin>>n>>m;
    int a[101], b[101], F[101][101];
    for (int i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for (int i=0; i<=n; i++) F[i][0]=0;
    for (int i=0; i<=m; i++) F[0][i]=0;
    for (int i=1; i<=n; i++)
        for (int j=1; j<=m; j++)
        {
            if (b[i]<=j)
            {
                F[i][j]=max(F[i-1][j],F[i-1][j-b[i]]+a[i]);
            }
            else F[i][j]=F[i-1][j];
        }
    cout<<F[n][m]<<endl;
    int i=n, j=m;
    int c[101];
    int dem=0;
    while ((i!=0) && (j!=0))
    {
        if (F[i][j]!=F[i-1][j])
        {
            c[dem]=i;
            j-=b[i];
            dem++;

        }
        i--;
    }
    cout<<dem<<" ";
    sort(c,c+dem);
    for (int i=0; i<dem; i++) cout<<c[i]<<" ";
    return 0;
}
