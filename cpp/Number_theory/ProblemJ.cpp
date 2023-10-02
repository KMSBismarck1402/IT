#include <bits/stdc++.h>
using namespace std;
#define mx 2000005
#define md 1000000007
typedef long long ll;

ll a[mx + 1], b[mx + 1];

ll epn(ll cs, ll lt)
{
    ll res = 1;
    while (lt > 0)
    {
        if (lt % 2 == 1)
            res = (res * cs) % md;
        cs = (cs * cs) % md;
        lt /= 2;
    }
    return res;
}

int main()
{
    ll t, n, k, o, p;
    a[0] = 1;
    b[0] = 1;
    for (ll i = 1; i <= mx; ++i)
        a[i] = (a[i - 1] * i) % md;
    for (ll i = 1; i <= mx; ++i)
        b[i] = epn(a[i], md - 2);
    cin >> t;
    while (t--)
    {
        cin >> n >> k;
        o = (a[n + k + 1] * b[k + 2]) % md;
        p = (o * b[n - 1]) % md;
        cout << ((2 * p) % md - n + md) % md << '\n';
    }
}