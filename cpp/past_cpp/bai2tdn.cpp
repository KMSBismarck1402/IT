#include <bits/stdc++.h>
using namespace std;

int main()
{

    int  b ,c ,i, n,k,y,d,e,f,g,h;
    cin >> n>>k;
    b=0;
    h=0;
    d=1;
    e=1;
    f=0;
    c=0;
    int a[n];
    for(i = 1 ; i<=n ; i++)
    {
        cin >> a[i];
        b = b + a[i];
    }
    g = b%k;
    if ( g != 0)
    {
        cout << "NO";
    }
    if ( g == 0)
    {
        for (i = 1 ; i <= k ; i++)
        {
            c = c + a[i];
            h = h+1;
            cout << "c/e = "<< c/e << " "<<"h = " << h<< " ";
            if ((b/k)==(c/e))
            {
                for (y = d; y <= h ; y++)
                {
                    cout << a[y] << " ";
                }
                d = y-1; cout << "d= "<< d<< " ";
                e = e+1;
                cout <<"e = "<< e << " ";
                cout << endl;
            }
        }
    }
}
