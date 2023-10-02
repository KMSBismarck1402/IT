#include <bits/stdc++.h>
using namespace std;

int fibo(int m , int n)
{
    int i;
    unsigned long long x,y,z;int a[100000], b;
    x=0;y=1;z=1;i=2;
    while (z < m)
    {
        x = y;
        y = z;
        z = x+y;
    }
    a[0] = z; i=1;
    while (z <= n)
    {
        x = y;
        y = z;
        z = x+y;
        a[i] = z;
        i+=1;
    }
    if (n = z)
    {
        i-=1;
    }
    for ( b = 0; b< i ; b++)
    {
        cout << a[b]<<" ";
    }
    cout << endl;
}

int main()
{
    freopen("Fibonacci.inp","r",stdin);
    freopen("Fibonacci.out","w",stdout);
    int a;
    int i;
    cin >>a;;
    int m[a];
    int n[a];
    for (i = 0 ; i < a ; i++)
    {
        cin >>m[i];
        cin>>n[i];
    }
    for (i=0;i<a;i++)
    {
        fibo(m[i],n[i]);
    }
}
