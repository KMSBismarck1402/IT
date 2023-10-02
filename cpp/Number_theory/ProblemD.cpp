#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 200007

const ll prime[15] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47};
ll t, n, k, m;

ll pw(ll a, ll n, ll md)
{
    if (n == 0)
        return 1;
    if (n % 2 == 1)
        return (pw(a, n - 1, md) * a) % md;
    else
        return pw((a * a) % md, n / 2, md);
}
ll iv(ll a, ll md)
{
    return pw(a % md, (md - 1) - 1, md);
}
ll lg(ll n, ll p)
{
    ll s = 0;
    for (ll i = p; i <= n; i *= p)
        s += n / i;
    return s;
}
ll ft(ll n, ll m)
{
    ll f = 1;
    for (ll i = 1; i <= n; i++)
        f = (f * i) % m;
    return f;
}
ll gt(ll n, ll p)
{
    if (n == 0)
        return 1;
    else
        return (gt(n / p, p) * pw(ft(p - 1, p), n / p, p) * ft(n % p, p)) % p;
}
ll C(ll n, ll k, ll p)
{
    if (lg(n, p) > lg(k, p) + lg(n - k, p))
        return 0;
    else
        return (gt(n, p) * iv(gt(k, p) * gt(n - k, p), p)) % p;
}
ll crt(vector<ll> &r, vector<ll> &md, int m)
{
    ll s = 0;
    for (ll i = 0; i < md.size(); i++)
    {
        s += (r[i] * m / md[i] * iv(m / md[i], md[i])) % m;
        s %= m;
    }
    return s;
}
int main()
{
    cin >> t;
    while (t--)
    {
        cin >> n >> k >> m;
        vector<ll> d, r;
        for (ll i = 0; i < 15; i++)
        {
            if (m % prime[i] == 0)
            {
                d.push_back(prime[i]);
                r.push_back(C(n, k, prime[i]));
            }
        }
        cout << crt(r, d, m) << "\n";
    }
}