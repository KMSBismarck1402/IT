#include <bits/stdc++.h>
using namespace std;

/* FUNCTIONS */
#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define bloop(i, a, b) for (int i = a; i >= b; i--)
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define tc(t) \
    int t;    \
    cin >> t; \
    while (t--)

/* PRINTS */
#define deb(x) cout << #x << "=" << x << endl
#define precision(n) fixed << setprecision(n)
#define endl "\n"
#define no "NO"
#define yes "YES"

/* UTILS */
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define mod (int)1000000007
#define infinity (int)(1e18)
#define setbit(n) __builtin_popcout(n)
#define PI 3.141592653589793238462

/* Main()  function */
signed main()
{
    fast;
    int s = 2 * 3 * 5 * 7;
    int n;
    cin >> n;

    if (n < 3)
        cout << -1;
    else if (n == 3)
        cout << s;
    else
    {
        cout << 1;
        int r = 10;
        for (int i = 3; i <= n; i++)
        {
            r = (r * 10) % s;
        }
        r = (s - r);
        for (int i = 4; i < n; i++)
        {
            cout << 0;
        }
        printf("%03d\n", r);
    }
}