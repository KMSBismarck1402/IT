#include <bits/stdc++.h>
using namespace std;

typedef pair<int,int> pii;
const int maxn = 1e5+1;
int n; stack<int> st; queue<int> q;
int data[maxn];
pair <int,int> a[maxn];
pii res[maxn];

bool bigger(pii a, pii b)
{
    return a.first < b.first;
}

int main()
{
    cin >> n;
    for(int i = 0; i < n; ++i)
    {
        cin >> a[i].first;
        a[i].second = i;
        data[i] = a[i].first;
        q.push(i); st.push(i);
    }
    sort(a,a+n,bigger);
    for(int i = 0; i < n; ++i)
        {
        while(data[q.front()] < a[i].first)
            q.pop();
        while(data[st.top()] < a[i].first)
            st.pop();
        res[a[i].second] = make_pair(q.front() + 1, st.top() + 1);
    }
    for(int i = 0; i < n; ++i)
        cout << res[i].first << " " << res[i].second << "\n";
    return 0;
}
