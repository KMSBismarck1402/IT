#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)

const int N = (int)5e5 + 5;
int n, t, last;
char s[N];
int q[N];
int Solve(int cnt)
{
    int tlast = n - 1, res = 0;
    for (int i = 0; i < n; i++)
    {
        if (i > last && cnt >= 0)
        {
            tlast = i - 1;
            break;
        }
        q[i] = 1;
        if (cnt < 0)
            q[i]++;
        if (s[i] == 'H')
            cnt--;
        if (s[i] == 'S')
            cnt++;
        if (cnt < 0)
            q[i]++;
        res += q[i];
    }
    if (cnt < 0)
        return t + 1;
    int res2 = res;
    for (int i = tlast; i >= 0; i--)
    {
        if (i == tlast)
            res += 1 - q[i];
        else
            res += 2 - q[i];
        if (res < res2)
            res2 = res;
    }
    return res2;
}
int main()
{
    fast;
    cin >> n >> t >> s;
    for (int i = 0; i < n; i++)
        if (s[i] == 'H')
            last = i;
    if (t < last + 1)
        return puts("-1"), 0;
    int l = -1,
        r = last + 1;
    while (r - l > 1)
    {
        int m = l + r >> 1;
        if (Solve(m) > t)
            l = m;
        else
            r = m;
    }
    cout << r;
}
