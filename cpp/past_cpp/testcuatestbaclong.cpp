#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,s=0,i,k,j=2,h;
    cin >> n>>k;
    h = pow(j,k);
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
    cout << s;
}
