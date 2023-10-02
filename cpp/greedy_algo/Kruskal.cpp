#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int MAX = 1e6 - 1;

int parent[MAX];
int find(int x)
{
    if (parent[x] == x)
        return x;
    return parent[x] = find(parent[x]);
}
void merge(int x, int y)
{
    parent[find(x)] = find(y);
}
struct Edge
{
    int u, v, w;
};
vector<Edge> edges;
int n, m;
int main()
{
    cin >> n >> m; // n là số đỉnh, m là số cạnh có trọng số
    for (int i = 1; i <= n; i++)
        parent[i] = i; // khởi tạo mảng cha
    for (int i = 0; i < m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges.push_back({u, v, w}); // lưu cạnh vào vector
    }
    sort(edges.begin(), edges.end(), [](Edge a, Edge b)
         {
             return a.w < b.w; // sắp xếp các cạnh theo trọng số
         });
    int ans = 0;
    for (auto e : edges)
    {
        if (find(e.u) != find(e.v))
        {                    // kiểm tra xem thêm cạnh có tạo thành chu trình không
            merge(e.u, e.v); // ghép hai tập hợp
            ans += e.w;      // thêm trọng số của cạnh vào kết quả
        }
    }
    cout << ans << endl; // in kết quả
}