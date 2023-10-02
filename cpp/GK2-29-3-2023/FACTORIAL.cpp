#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll i, l, r;
    double d = 0;
    bool kc = false, cka = false, ckb = false;
    int a, b;
    cin >> a >> b;
    for (i = 1; i <= 1e6; i++)
    {
        d += log10(i);
        if (floor(d + 1) >= a && cka == false)
        {
            l = i;
            if (a == 1)
                l = 0;
            kc = true;
            cka = true;
        }
        if (floor(d + 1) <= b)
        {
            r = i;
        }
        if (floor(d + 1) > b && ckb == false)
        {
            if (l < r)
            {
                cout << l << " " << r;
                return 0;
            }
            ckb = true;
        }
        if (floor(d + 1) > a && floor(d + 1) > b || a > b)
        {
            cout << -1;
            return 0;
        }
    }
}
