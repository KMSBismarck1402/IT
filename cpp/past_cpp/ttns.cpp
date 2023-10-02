#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a,i,c,b;
    freopen("ttns.inp","r",stdin);
    freopen("ttns.out","w",stdout);
    cin >> a ;
    c=0;
    for(i = 1;i<=a;i++)
    {
        cin >> b;
        c = c + b;
    }
    cout << c;
}
