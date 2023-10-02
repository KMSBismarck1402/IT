#include <bits/stdc++.h>
using namespace std ;

int main ()
{
    int a[10] = {1,2,3,4,5,6,7,8,9};
    int b[10] = {3,2,1,1,1,1,1,1,1};
    int c[10] = {1,1,1,2,1,1,1,2,3};
    int i,j,d,e;
    for (i = 0 ; i<9 ; i++)
    {
        if (c[i] >1)
        {
            d = a[i]/c[i];
            e=d/c[i];
            cout << 100*a[i] + 10*d+e<<" ";
        }

    for (j=1 ; j<= b[i] ;j++)
    {
        cout << 100*a[i] + 10*a[i]*j + a[i]*j*j<< " ";
    }
    }
}
