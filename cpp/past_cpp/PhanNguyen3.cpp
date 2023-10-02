#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ULL;

ULL tpg(ULL n , ULL k)
{
    ULL j =2; ULL h = pow(j,k); ULL s=0,i;
    for (i=1;i<=n;i++)
    {
        if (i < h)
        {
            s=s+j-1;
        }
        else if (i = h)
        {
            j++;
            h = pow(j,k);
            s=s+j-1;
        }
    }
    return s;
}


int main()
{
    freopen("PhanNguyen.inp","r",stdin);
    freopen("PhanNguyen.out","w",stdout);
    unsigned long long n,s=0,i,k,j=2,h;
    cin >> n;
    cout << tpn(n);
}
