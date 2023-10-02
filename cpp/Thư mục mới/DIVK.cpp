#include <bits/stdc++.h>
using namespace std;

int main()
{

    int  b ,c ,i, n,k,y,d;
    cin >> n>>k;
    b=0;
    d=1;
    c=0;
    int a[n];
    for(i = 1 ; i<=n ; i++)
    {
        cin >> a[i];
        b = b+ a[i];
    }
    if ((b%k)!=0)
    {
        cout << "NO";
    }
    else if ((b%k)== 0)
    {
        for (i = 1 ; i <= n ; i++)
        {
            c = c+ a[i];
            if ((b%c)=0)
            {
                for (y = d; y <= i ; y ++)
                {
                    cout << a[y];
                }
                d = y+1;
                cout << endl;
            }
        }
    }
}
