#include <bits/stdc++.h>
using namespace std;

#define ll long long

ll ec(ll a, ll b, ll &x, ll &y)
{
    if (b)
    {
        ll d = ec(b, a % b, y, x);
        return y -= a / b * x, d;
    }
    return x = 1, y = 0, a;
}
ll crt(ll a, ll m, ll b, ll n)
{
    if (n > m)
        swap(a, b), swap(m, n);
    ll x, y, g = ec(m, n, x, y);
    assert((a - b) % g == 0); 
    x = (b - a) % n * x % n / g * m + a;
    return x < 0 ? x + m * n / g : x;
}

ll nl(ll i, int p)
{
    while (i % p == 0)
        i /= p;
    return i;
}

ll lg(ll n, int p)
{
    ll r = 0;
    while (n)
        n /= p, r += n;
    return r;
}

int pow(ll a, ll b, int m)
{
    a %= m;
    int r = 1;
    while (b)
    {
        if (b & 1)
            r = 1LL * r * a % m;
        a = 1LL * a * a % m;
        b >>= 1;
    }
    return r;
}

int F[1000002] = {1}, p, e, pe;

int f(ll n)
{
    if (!n)
        return 1;
    return 1LL * pow(F[pe], n / pe, pe) * (1LL * F[n % pe] * f(n / p) % pe) % pe;
}

int ncr(ll n, ll r)
{
    ll c;
    if ((c = lg(n, p) - lg(r, p) - lg(n - r, p)) >= e)
        return 0;
    for (int i = 1; i <= pe; i++)
        F[i] = 1LL * F[i - 1] * (i % p == 0 ? 1 : i) % pe;
    return 1LL * (1LL * f(n) * pow(p, c, pe) % pe) * pow(1LL * f(r) * f(n - r), pe - (pe / p) - 1, pe) % pe;
}

int ncr(ll n, ll r, int m)
{
    int a0 = 0, m0 = 1;
    for (p = 2; m != 1; p++)
    {
        e = 0, pe = 1;
        while (m % p == 0)
            m /= p, e++, pe *= p;
        if (e)
        {
            a0 = crt(a0, m0, ncr(n, r), pe);
            m0 = m0 * pe;
        }
    }
    return a0;
}

int main()
{
    int t, m;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k >> m;
        ll a = (n + k - 1) / k;
        ll ex = a * k - n;
        cout << a << ' ' << ncr(ex + a - 1, a - 1, m) << '\n';
    }
}