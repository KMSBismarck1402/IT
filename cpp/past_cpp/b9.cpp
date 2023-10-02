#include <bits/stdc++.h>
#define task "bai9"
using namespace std;
void findTriplets(int ar[], int n)
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
        ans.push_back({ ar[0].second,ar[1].second,ar[2].second });
        for (int x = 0; x < 3; x++)
        {
            ar[x].first--;
            if (ar[x].first)
                pq.push(ar[x]);
        }
    }
    cout << "Maximum number of possible triples: ";
    cout << ans.size() << endl;

    for (auto& pa : ans)
    {
        sort(pa.begin(), pa.end());
        for (int v : pa)
            cout << v << " ";
        cout << endl;
    }
}
int main()
{
    freopen(task".inp","r",stdin);
    freopen(task".out","w",stdout);
    int arr[100] ;
    int n=0;
    int x;
    while(cin>>x)
        arr[n++]=x;
    findTriplets(arr, n);
}
