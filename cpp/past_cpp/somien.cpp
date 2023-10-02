#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("SoMien.INP","r",stdin);
    freopen("SoMien.OUT","w",stdout);
    int n,i;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        cout << 2+a[i]*(a[i]-1)<<" ";
    }
}
