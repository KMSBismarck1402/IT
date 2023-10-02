#include <bits/stdc++.h>
using namespace std;

int sochuso(int n,int m)
{
    return floor(log10(n) + log10(m) +1);
}

int main()
{
    int n,i,s=0;
    cin >> n;
    int a[n-1];
    for (i=0 ; i<n ; i++)
    {
        cin >> a[n];
    }
    for(i=0;i<n;i+=2)
    {
        s+= sochuso(a[i],a[i+1]);
    }
    cout << s;
}
