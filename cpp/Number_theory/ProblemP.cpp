#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int t = 1;
    while(1)
    {
        int n;
        cin >> n;
        if(n == 0)
            break;
        ll s = 0;
        int a[n][n];
        for(int i = 0;i < n; i++)
        {
            for(int j = 0;j < n; j++)
            {
                cin >> a[i][j];
                s += a[i][j];
            }
        }
        ll ans = 0;
        for(int i = 0;i < n; i++)
        {
            int l = 0;
            int g = 0;
            for(int j = 0;j < n; j++)
                l += a[i][j];
            for(int j = 0;j < n; j++)
                g += a[j][i];
            int r = g-l;
            if(r > 0)
                ans += r;
        }
        cout << t << ". " << s << " " << ans << "\n";
        t++;
    }
}