#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,mn,c=1,mx=2e5,d=0;
    cin >> n;
    vector<int> v[n+1];
    int *a = new int[n];
    cin >> a[0];
    v[a[0]].push_back(0);
    for(i= 1; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != a[i - 1])
        {
            v[a[i]].push_back(i);
            c = 0;
        }
    }
    if(c)
    {
        cout << 0 << "\n";
        return;
    }
    for(i=0;i<=n;i++)
        if (v[i].size() < mx && v[i].empty()==0)
        {
            mx = v[i].size();
            mn = i;
        }
 //   cerr << "mn="<<mn<<" ";
    if (v[mn].front() == 0)
        d = v[mn].size();
    else
        d = v[mn].size()+1;
    if (a[0] == a[n-1])
        d = min(d, int(v[a[0]].size ()-1));
    cout << d << "\n";
    delete[]a;
}

int main() {
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}

/*
5
3
1 1 1
5
1 2 3 4 5
5
1 2 3 2 1
7
1 2 3 1 2 3 1
11
2 2 1 2 3 2 1 2 3 1 2
*/

