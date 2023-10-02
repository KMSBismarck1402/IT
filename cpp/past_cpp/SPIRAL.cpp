#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("SPIRAL.INP","r",stdin);
    freopen("SPIRAL.OUT","w",stdout);
    int n,i,s,a;
    cin >> n;
    s=n; a=n;
    for(i=1;i<n;i++)
    {
        a= a+2*n-2*i;
        s+= a;
    }
    cout << s;
}
