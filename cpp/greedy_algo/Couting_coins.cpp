#include <bits/stdc++.h>
using namespace std;

// Hàm coinChange nhận vào mảng coins chứa các giá trị của các đồng xu có sẵn và số lượng đồng xu n, cùng với số tiền cần đổi.
void coinChange(int coins[], int n, int money)
{
    // Sắp xếp mảng coins giảm dần.
    sort(coins, coins + n, greater<int>());
    int i = 0;
    while (money > 0)
    {
        if (coins[i] <= money)
        {
            cout << coins[i] << " ";
            money -= coins[i];
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int n;
    cout << "Nhap so luong dong xu: ";
    cin >> n;
    int coins[n];
    cout << "Nhap gia tri cua cac dong xu: ";
    for (int i = 0; i < n; i++)
    {
        cin >> coins[i];
    }
    int money;
    cout << "Nhap so tien can doi: ";
    cin >> money;
    cout << "Cac dong xu can dung de doi " << money << " la: ";
    coinChange(coins, n, money);
    return 0;
}