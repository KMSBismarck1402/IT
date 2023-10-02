#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll n, m;
int main()
{
    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    cout.tie(NULL);
    ll value, ans = 1;
    // freopen("AL.in", "r", stdin);
    cin >> n >> m;
    ll *a = new ll[n];
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        a[i] = value;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            ans *= abs(a[i] - a[j]) % m;
            ans %= m;
        }
    }
    cout << ans;
    return 0;
}