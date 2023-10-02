#include <bits/stdc++.h>
using namespace std;

// Định nghĩa một cấu trúc Item để lưu trữ giá trị và khối lượng của món hàng
struct Item
{
    int value, weight;
    Item(int value = 0, int weight = 0) : value(value), weight(weight) {}
};

// Hàm so sánh để sắp xếp các món hàng theo tỷ lệ giá trị trên khối lượng của chúng
bool cmp(Item a, Item b)
{
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

// Hàm giải quyết bài toán knapsack phân số
double fractionalKnapsack(int W, Item arr[], int n)
{
    // Sắp xếp các món hàng theo tỷ lệ giá trị trên khối lượng của chúng
    sort(arr, arr + n, cmp);

    // Khởi tạo biến curWeight và finalValue
    int curWeight = 0;
    double finalValue = 0.0;

    // Thêm các món hàng vào cái túi cho đến khi không thể thêm nữa
    for (int i = 0; i < n; i++)
    {
        if (curWeight + arr[i].weight <= W)
        {
            curWeight += arr[i].weight;
            finalValue += arr[i].value;
        }
        else
        {
            int remain = W - curWeight;
            finalValue += arr[i].value * ((double)remain / arr[i].weight);
            break;
        }
    }

    // Trả về giá trị cuối cùng
    return finalValue;
}

int main()
{
    // Nhập số lượng món hàng và khối lượng tối đa của cái túi
    int n, W;
    cout << "Nhap so luong mon hang: ";
    cin >> n;
    cout << "Nhap khoi luong toi da cua tui: ";
    cin >> W;

    // Nhập giá trị và khối lượng của từng món hàng
    Item arr[n];
    for (int i = 0; i < n; i++)
    {
        int value, weight;
        cout << "Nhap gia tri va khoi luong cua mon hang " << i + 1 << ": ";
        cin >> value >> weight;
        arr[i] = Item(value, weight);
    }

    // Tính toán giá trị tối ưu của các món hàng và in ra kết quả
    double result = fractionalKnapsack(W, arr, n);
    cout << "Gia tri toi uu cua cac mon hang la: " << result << endl;

    return 0;
}