#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mx = 2e5 + 5;
const int md = 1e9 + 7;

int a[10], b[10];
ll d[mx];

ll pwm(ll a, ll b)
{
    ll res = 1;
    while (b > 0)
    {
        if (b & 1)
            res = res * a % md;
        a = a * a % md;
        b >>= 1;
    }
    return res;
}

ll gcd(ll a, ll b)
{
    return b == 0 ? a : gcd(b, a % b);
}

int main()
{
    int t, k;
    cin >> t;
    while (t--)
    {
        cin >> k;
        for (int i = 0; i < k; i++)
            cin >> a[i] >> b[i];
        ll r = 1;
        for (int i = 0; i < k; i++)
            r = r * (b[i] - a[i] + 1) % md;
        r = pwm(r, md - 2);
        ll ans = 0;
        for (int i = mx - 1; i > 0; i--)
        {
            d[i] = 1;
            for (int j = 0; j < k; j++)
            {
                d[i] = d[i] * ((b[j] / i) - ((a[j] - 1) / i));
                d[i] %= md;
            }
            for (int j = 2; j * i < mx; j++)
            {
                d[i] -= d[i * j];
                if (d[i] < 0)
                    d[i] += md;
            }
            ans += d[i] * i;
            ans %= md;
        }
        ans = ans * r % md;
        ans = md - ans;
        if (ans == md)
        {
            ans = 0;
        }
        cout << ans << '\n';
    }
}