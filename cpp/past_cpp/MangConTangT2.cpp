#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,j,d=0;
    cin >> n;
    int *a = new int[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    i=0;
    while(i<n)
    {
        j=1;
        while(a[i]<a[i+1]&&(i!=(n-1)))
        {
            i++;j++;d=1;
        }
        if(d==1)
        {
            while(j!=0)
            {
                cout << j << " ";
                j--;
            }
        }
        else if(d==0)
            cout << 1 <<" ";
        d=0;
        i++;
    }
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
3
4
2 1 4 3
3
4 2 2
5
2 1 3 5 1
*/
