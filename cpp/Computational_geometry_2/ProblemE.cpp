#include <bits/stdc++.h>
using namespace std;

#define EPS 1e-9

const int MOD = 1E9 + 7;
const int N = 100000 + 5;
const int dx[] = {0, 0, -1, 1, -1, -1, 1, 1};
const int dy[] = {-1, 1, 0, 0, -1, 1, -1, 1};

int n, m;
int a[N], b[N];
double dp[N][100 + 10];
double C(int n, int m)
{
    if (n < m)
        return 0;
    double res = 1;
    for (int i = 1; i <= m; i++)
        res = res * (1.0 * (n - i + 1) / i);
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }
    for (int i = 1; i <= n; i++)
        dp[i][a[i]] = 1;
    double res = 0;
    for (int i = 1; i <= n; i++)
        res += dp[i][0];
    cin >> m;
    while (m--)
    {
        int u, v, k;
        cin >> u >> v >> k;
        res -= dp[u][0];
        for (int i = 0; i <= a[u]; i++)
        {
            double temp = 0;
            for (long long j = 0; j <= k; j++)
                temp += dp[u][i + j] * C(i + j, j) * C(b[u] - i - j, k - j) / C(b[u], k);
            dp[u][i] = temp;
        }
        b[u] -= k;
        b[v] += k;
        res += dp[u][0];
        printf("%.10lf\n", res);
    }
}
