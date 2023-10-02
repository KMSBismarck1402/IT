#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, W;
    cin >> n >> W; // đọc vào n và W, n là số lượng món hàng, W là trọng lượng tối đa
    int w[n], v[n];
    for (int i = 0; i < n; i++)
    {
        cin >> w[i] >> v[i]; // đọc vào trọng lượng (w) và giá trị(v)
    }
    int dp[n + 1][W + 1];
    for (int i = 0; i <= n; i++)
    {
        dp[i][0] = 0; // khởi tạo cột đầu tiên bằng 0
    }
    for (int i = 0; i <= W; i++)
    {
        dp[0][i] = 0; // khởi tạo hàng đầu tiên bằng 0
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (w[i - 1] <= j) // nếu trọng lượng của vật phẩm nhỏ hơn hoặc bằng trọng lượng hiện tại
            {
                dp[i][j] = max(dp[i - 1][j], v[i - 1] + dp[i - 1][j - w[i - 1]]);
                // chọn max của việc bao gồm hoặc không bao gồm vật phẩm
            }
            else
            {
                dp[i][j] = dp[i - 1][j];
                // ngược lại không bao gồm vật phẩm
            }
        }
    }
    cout << dp[n][W] << endl; // xuất giá trị lớn nhất có thể đạt được
}