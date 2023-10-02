#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,i,j,b=0,x,y,h;
    cin >> n >> k;
    int a[n-1][n-1]; i = (n-k+1)*(n-k+1) ; int s[i];
    for (y =0 ; y < i ; y++)
    {
        s[y] = 0;
    }
    for (i = 0 ; i< n ; i++)
    {
        for (j = 0 ; j<n ; j++)
        {
            cin >> a[i][j];
        }
    }
    for (i = 0 ; i<(n-k+1) ; i++)
    {
        for (j = 0 ; j<(n-k+1) ; j++)
        {
            for(x = 0 ; x< k ; x++)
            {
                for ( y = 0 ; y < k ; y++)
                {
                    s[b] += a[i+x][j+y];
                }
            }
            b++;
        }
    }
    h = s[0];
    for(i = 1 ; i< b ; i++)
    {
        if (h < s[i]);
        {
            h = s[i];
        }
    }
    cout << h;

}
