#include <bits/stdc++.h>
using namespace std;

int mxf(int *a, int n)
{
    int i,s=0,d=1;
    for(i=1;i<n;i++)
        {
        if(a[i]==a[s])
            d++;
        else
            d--;
        if(!d)
        {
            s=i;
            d=1;
        }
    }
    return a[s];
}

void solve()
{
    int n,i,d=0,j;
    cin >> n;
    int *a = new int[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    j =  mxf(a , n);
    for(i = 0; i < n; i++)
    {
        if(a[i]==j)
            d++;
    }
    cout <<n-d<<"\n";
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
1 2 3
4
5 5 5 5
4
2 2 1 1
3
1 1 2
*/
