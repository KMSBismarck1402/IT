#include <bits/stdc++.h>
using namespace std;

bool revsort(int a[],int n, int m)
{
    int mxv = a[0],i;
    for(i=0;i<n;i++)
    {
        if(a[i]>=mxv)
            mxv=a[i];
        else if(mxv+a[i]>m)
            return false;
    }
    return true;
}

void solve()
{
    int n,m,i;
    string ans[] = {"NO","YES"};
    cin >> n >> m;
    int *a=new int[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    cout << ans[revsort(a,n,m)]<<"\n";
    delete []a;
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
4 1
1 2 3 4
4 1
2 1 3 4
5 7
3 2 2 3 3
*/
