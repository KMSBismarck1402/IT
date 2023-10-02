#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int sx = 0, sy = 0, mx = 1e9, my = 1e9, s, e;
    int n, i, j;
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    for (i = 0; i < n; i++)
        cin >> a[i] >> b[i];
    sort(a, a + n);
    sort(b, b + n);
    s = min(a[0], b[0]);
    e = max(a[n - 1], b[n - 1]);
    for (i = s - 100; i <= e + 100; i++)
    {
        sx = 0;
        sy = 0;
        for (j = 0; j < n; j++)
        {
            sx = sx + abs(a[j] - (i + j));
            sy = sy + abs(b[j] - i);
        }
        mx = min(sx, mx);
        my = min(sy, my);
    }
    cout << mx + my;
}