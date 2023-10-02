#include <bits/stdc++.h>
using namespace std;

const int mxN = 2 * 1e5;
int a[mxN];

void solve()
{
    int n,q,i;
    cin >> n >> q;
    for (i = 0; i < n; i++)
        cin >> a[i];
    sort(a, a + n);
    while (q--)
    {
        int x;
        cin >> x;
        i = lower_bound(a, a + n, x) - a;
        if (a[i] == x) {
            cout << "0" << "\n";
            continue;
        }
        if ((n - i) & 1)
            cout << "NEGATIVE" << "\n";
        else
            cout << "POSITIVE" << "\n";
    }
}

int main() {
   ios_base::sync_with_stdio(false);
   cin.tie(0);
   solve();
}

