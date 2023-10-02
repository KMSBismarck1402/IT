#include <bits/stdc++.h>
using namespace std;
akljids;kasdjfkl
const int MAXCOL = 10000;
const int MAXROW = 10000;
int rando(int mi , int ma)
{
    return (mi + rand() % (ma - mi +1));
}

bool ktt(int a[][MAXCOL], int m, int n, int mc, int nc, int x)
{
    int i,j;
    for (i = 0; i < mc ; i++)
    {
        for (j =0 ; j < n ; j++)
        {
            if(a[i][j] == x)
              return true;
        }
    }
    for (j=0 ; j < nc; j++)
    {
        if (a[mc][j] == x )
            return true;
    }
    return false;
}

int main ()
{
    int m,n,mc,nc,k,kk,x;
    cin >> m >> n;
    static int a [MAXROW][MAXCOL] ;
    cin >> k;
    kk = m*n;
    if (k > kk)
    {
        cout << "no ";
        return 1;
    }
    for (mc =0 ; mc < m ; mc++)
    {
        for (nc = 0 ; nc < n ; nc++)
        {
            x = rando(1,kk);
            a[mc][nc] = x;
            if (ktt(a, m, n, mc, nc, x))
                nc--;
        }
    }
    for (mc =0 ; mc < m ; mc++)
    {
        for (nc = 0 ; nc < n ; nc++)
        {
            if (a[mc][nc] <= k)
                cout << a[mc][nc] << " ";
            else
                cout << " x ";
        }
    cout << endl;
    }
}

