#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n; // Đọc số lượng trẻ em
    vector<int> ratings(n);
    for (int i = 0; i < n; i++)
    {
        cin >> ratings[i]; // Đọc điểm của từng trẻ em
    }
    vector<int> candies(n, 1); // Khởi tạo một vector kẹo với 1 kẹo cho mỗi trẻ em
    for (int i = 1; i < n; i++)
    {
        if (ratings[i] > ratings[i - 1])
        {                                    // Nếu điểm của trẻ em hiện tại cao hơn điểm của trẻ em bên trái
            candies[i] = candies[i - 1] + 1; // Gán nhiều kẹo hơn cho trẻ em hiện tại so với trẻ em bên trái
        }
    }
    for (int i = n - 2; i >= 0; i--)
    {
        if (ratings[i] > ratings[i + 1])
        {                                                     // Nếu điểm của trẻ em hiện tại cao hơn điểm của trẻ em bên phải
            candies[i] = max(candies[i], candies[i + 1] + 1); // Gán nhiều kẹo hơn cho trẻ em hiện tại so với trẻ em bên phải
        }
    }
    cout << "Số kẹo được phân phát: ";
    for (int i = 0; i < n; i++)
    {
        cout << candies[i] << " "; // In ra số lượng kẹo được phân phát cho từng trẻ em
    }
    return 0;
}