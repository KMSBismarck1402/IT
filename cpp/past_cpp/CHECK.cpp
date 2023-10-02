#include <bits/stdc++.h>
using namespace std;

int scs(int a)
{
    int s=0;
    while (a >=1)
    {
        s++;
        a/=10;
    }
    return s;
}

int kt(int a)
{
    int i,n,s,b,c,d,e=0;
    s = scs(a);
    for(i = 1; i<=n ; i++)
    {
        b = i%2;
        n = pow(10,(s-i));
        c= a/n;
        d =  c%2;
        if (b != d)
        {
            e++;
        }
    }
    if (e == 0)
        cout << "YES"<<endl;
    if (e!= 0)
        cout << "NO"<<endl;
}

int main()
{
    int n,i,s;
    cin >> n;
    int a[n];
    for(i=0; i<n ; i++)
    {
        cin >> a[i];
    }
    for(i=0; i<n;i++)
    {
        kt (a[i]);
    }
}
