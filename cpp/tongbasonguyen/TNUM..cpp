#include <bits/stdc++.h>
using namespace std;

int ub(int a)
{
    freopen ("TNUM.INP","r",stdin);
    freopen ("TNUM.OUT","w",stdout);
    int s,i;
    s=2;
    if(a!=2)
    {for (i=2;i<=( (a/2)+1 );i++)
    {
        if(a%i ==0)
        {s=s+1;}
    }}
    else if (a==2){s=2;}
    if (s==3)
    {
        cout << "YES"<<endl;
    }
    if (s!=3)
    {
        cout << "NO"<<endl;
    }
}

int main ()
{
    int n,i;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for (i=0;i<n;i++)
    {
        ub(a[i]);
    }
}
