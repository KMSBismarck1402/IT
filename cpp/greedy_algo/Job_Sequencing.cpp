#include <bits/stdc++.h>
using namespace std;

// Định nghĩa một công việc
struct Job
{
    int id;       // ID của công việc
    int deadline; // Deadline của công việc
    int profit;   // Lợi nhuận của công việc
};

// So sánh lợi nhuận của hai công việc để sắp xếp theo thứ tự giảm dần
bool comparison(Job a, Job b)
{
    return (a.profit > b.profit);
}

// Hàm tìm kiếm lợi nhuận tối đa và in ra kết quả
void printJobScheduling(Job arr[], int n)
{
    // Sắp xếp các công việc theo thứ tự giảm dần của lợi nhuận
    sort(arr, arr + n, comparison);

    int result[n]; // Lưu trữ kết quả (ID của các công việc được chọn)
    bool slot[n];  // Lưu trữ các slot thời gian có sẵn

    // Khởi tạo tất cả các slot thời gian đều chưa được sử dụng
    for (int i = 0; i < n; i++)
    {
        slot[i] = false;
    }

    // Bắt đầu chọn các công việc
    for (int i = 0; i < n; i++)
    {
        // Tìm slot thời gian có sẵn gần nhất trước deadline của công việc hiện tại
        for (int j = min(n, arr[i].deadline) - 1; j >= 0; j--)
        {
            if (slot[j] == false)
            {
                result[j] = i;  // Thêm công việc hiện tại vào kết quả
                slot[j] = true; // Đánh dấu slot thời gian này đã được sử dụng
                break;
            }
        }
    }

    int totalProfit = 0;
    cout << "Cac cong viec duoc chon la: ";
    for (int i = 0; i < n; i++)
    {
        if (slot[i])
        {
            cout << arr[result[i]].id << " ";
            totalProfit += arr[result[i]].profit;
        }
    }
    cout << "\nLai nhuan toi da la: " << totalProfit << endl;
}

int main()
{
    int n;
    cout << "Nhap so luong cong viec: ";
    cin >> n;

    Job arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Nhap deadline va profit cua cong viec thu " << i + 1 << ": ";
        cin >> arr[i].deadline >> arr[i].profit;
        arr[i].id = i + 1;
    }

    printJobScheduling(arr, n);

    return 0;
}