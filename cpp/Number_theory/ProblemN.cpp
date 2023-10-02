#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int mx = 44;
ll dp[mx][mx] = {0}, dp2[mx] = {0};

int main()
{
    int n, h;
    dp2[0] = dp2[1] = 1;
    for (int i = 2; i < mx; i++)
        for (int j = 1; j <= i; j++)
            dp2[i] += dp2[j - 1] * dp2[i - j];
    dp[0][0] = 1;
    for (int i = 1; i < mx; i++)
    {
        for (int j = 0; j < mx; j++)
        {
            if (j <= 1)
            {
                dp[i][j] = dp2[i];
                continue;
            }
            for (int k = 1; k <= i; k++)
            {
                dp[i][j] += dp2[k - 1] * dp[i - k][j - 1];
                dp[i][j] += dp[k - 1][j - 1] * dp2[i - k];
                dp[i][j] -= dp[k - 1][j - 1] * dp[i - k][j - 1];
            }
        }
    }
    cin >> n >> h;
    cout << dp[n][h];
}