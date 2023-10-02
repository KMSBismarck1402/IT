#include <bits/stdc++.h>
using namespace std;

void timkiem(int ar[], int n)
{
    unordered_map<int, int> mp;

    for (int x = 0; x < n; x++)
        mp[ar[x]]++;
    priority_queue<pair<int, int> > pq;

    for (auto& pa : mp)
        pq.push({ pa.second, pa.first });
    vector<array<int, 3> > ans;

    while (pq.size() >= 3)
    {
        pair<int, int> ar[3];
        for (int x = 0; x < 3; x++)
        {
            ar[x] = pq.top();
            pq.pop();
        }
        ans.push_back({ ar[0].second, ar[1].second, ar[2].second });
        for (int x = 0; x < 3; x++)
        {
            ar[x].first--;
            if (ar[x].first)
                pq.push(ar[x]);
        }
    }
    cout << ans.size() << "\n";
    for (auto& pa : ans)
    {
        for (int v : pa)
            cout << v << " ";
        cout << "\n";
    }
}
int main()
{
    freopen("Bai09.inp", "r", stdin);
    freopen("Bai09.out", "w", stdout);
    int n;
    cin >> n;
    int arr[n + 1];
    for(int i = 1; i <= n; i++)
        cin >> arr[i];
    timkiem(arr, n);
    return 0;
}
