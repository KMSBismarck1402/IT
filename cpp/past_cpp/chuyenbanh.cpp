#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,i,a=1,b=1;
    cin >>n;
    for (i= 1; i<=(n-2) ; i++)
    {
        a*=(n-1);
    }
    a*=(n-2);
    cout << a<<" ";
    b*=(n-1);
    for(i=2;i<=(n-2);i++)
    {
        b*=(n-2);
    }
    cout << b<<" ";
    a-=b;
    cout << a<<" ";
    a= n;
    for(i=1 ; i<=n ; i++)
    {
        b=a-1;
        a=(b-1)*(n-1)+(a-1)*(n-2);
    }
    cout <<a;
}
