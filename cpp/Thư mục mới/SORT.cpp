#include <bits/stdc++.h>
using namespace std;

int main()
{

    long a , b ,c ,i, y ,z,d,e;
    cin >>a >> b ;
    c =a +b; d = b+1;e = b;
    int m[a];int n[c];
    for (i=1 ; i<=a;i++)
    {
        cout << "a"<<i<<" = ";
        cin >> m[i];
    }
    for (i=1;i<=b;i++)
    {
        cout << "b"<<i<<" = ";
        cin >> n[i];
    }
    for(i=1;i<=a;i++)
    {
        for (y=1;y<=e;y++)
        {
            if (m[i] <= n[y])
            {
                for (z = d; z > y;z--)
                {
                    n[z] = n[z-1];
                }
                d = d+1; e = e+1;
                n[y]=m[i];;
            }
        }
    }
    for (i=1;i<=c;i++)
    {
        cout << n[i] << " ";
    }
}
