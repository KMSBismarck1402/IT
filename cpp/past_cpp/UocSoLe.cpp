#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("UocSoLe.inp","r",stdin);
    freopen("UocSoLe.out","w",stdout);
    int i = 1, n, m=0;;
    cin >> n;
    while(i <= n)
    {
        if((n % i == 0) && (i % 2 == 1))
        {
            m++;
        }
            i++;
    }
    cout << m;
}
