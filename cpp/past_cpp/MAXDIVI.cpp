#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("MAXDIVI.INP","r",stdin);
    freopen("MAXDIVI.OUT","w",stdout);
    int n,m,i,d=0;
    cin >> n ;
    int *a = new int[n];
    int *b = new int[n-1];
    for(i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    for(i=0;i<n-1;i++)
        b[i]=abs(a[i+1]-a[i]);
    for(i=0;i<n-2;i++)
        d=max(d,__gcd(b[i],b[+1]));

    cout << d;
    delete[]a;
    delete[]b;
}

/*
4
13 16 10 7
*/
