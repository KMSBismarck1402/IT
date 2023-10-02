#include <bits/stdc++.h>
using namespace std;

void tgmoi(int h1, int p1, int s1)
{
    s1 += 1;
    if (s1 > 59)
    {
        p1 += 1;
        s1 = 0;
        if (p1 > 59)
        {
            p1 = 0;
            h1 += 1;
        }
    }
    cout << h1 << " " << p1 << " " << s1;
}
int main()
{
    int h,p,s;
    cin >> h;
    while (h < 0 && h > 24)
        cin >> h;
    cin >> p;
    while (p < 0 && p > 59)
        cin >> p;
    cin >> s;
    while (s < 0 && s > 59)
        cin >> s;
    tgmoi(h,p,s);
}
