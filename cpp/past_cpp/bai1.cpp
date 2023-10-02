#include <bits/stdc++.h>
using namespace std;

bool ktnt(int n)
{
    int a = 2;
    while ( (n % a != 0) && (a <= n/a))
        a++;
    return a > n/a;
}

int main ()
{
    long long m,n,a[1000],i,c,b,d;
    cin >> m >> n;
    b=0;
    c=1;
    for (i=0;i<= 100;i++)
    {
        a[i]=b+c;
        b=c;
        c=a[i];
    }
    for (i=0; i <= 100 ; i++)
    {
        if (ktnt(a[i] ) && a[i] >= m && a[i] <=n)
            cout << a[i] << " ";
    }
}
