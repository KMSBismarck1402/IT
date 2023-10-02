#include <bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,i,a;
    cin >> m >> n;
    a=1;
    if( m%2 != 0)
    { i=m;
    while(i<=n)
    {
        cout << i << " ";
        if (a%15 == 0)
        {
            cout <<endl;
        }
        a = a+1;
        i = i+2;
    }
    }
    if (m%2 ==0)
    { i = m+1;
        while (i<=n)
        {
            cout <<i << " ";
            if (a%15 ==0)
            {
                cout << endl;
            }
            a = a+1;
            i=i+2;
        }
    }
}
