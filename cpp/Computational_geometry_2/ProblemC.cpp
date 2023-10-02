#include <bits/stdc++.h>
using namespace std;

/* UTILS */
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
double const eps = 1e-8;
/* Main()  function */
signed main()
{
    fast;
    double y1, y2, yw, xb, yb, r;
    cin >> y1 >> y2 >> yw >> xb >> yb >> r;
    yw -= r;
    double y = y1 + r;
    y = 2 * yw - y;
    double k = (y - yb) / xb,
           ans = (y - yw) / k,
           A = 1,
           B = ans / (yw - y1 - r),
           C = -B * (y1 + r);
    double dis = (B * y2 + C) / sqrt(B * B + 1);
    if (dis < r + eps)
        cout << "-1";
    else
        printf("%.9lf", ans);
}
