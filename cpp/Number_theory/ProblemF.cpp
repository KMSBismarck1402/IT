#include <bits/stdc++.h>
using namespace std;
#define mx 1000007
#define md 1000000007
typedef long long ll;

ll f[mx];
ll ep(ll x, ll mu)
{
    if (mu == 0)
        return 1;
    ll s = ep(x, mu / 2);
    s = s * s % md;
    if (mu % 2 == 1)
        s = s * x % md;
    return s;
}
int main()
{
    ll n, w, t, r;
    f[0] = 1;
    for (ll i = 1; i < mx; ++i)
        f[i] = f[i - 1] * i % md;
    cin >> n >> w >> t >> r;
    ll ans = f[n] % md;
    ans = ans * ep(f[w], md - 2) % md;
    ans = ans * ep(f[t], md - 2) % md;
    ans = ans * ep(f[r], md - 2) % md;
    cout << ans % md;
    return 0;
}
