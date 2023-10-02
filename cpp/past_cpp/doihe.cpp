#include <bits/stdc++.h>
using namespace std;

int chuyenhe(int a, int n)
{
    int i;int c = 0;int m;int r = a;
    char ar[30];
    while (r > 0)
    {
        if (n > 10)
        {
            m = r % n;
            if (m >= 10)
            {
                ar[c] = (char) (m + 55);
                c++;
            } else
            {
                ar[c] = (char) (m + 48);
                c++;
            }
        }
        else
        {
            ar[c] = (char) ((r % n) + 48);
            c++;
        }
        r = r / n;
    }
    for (i = c - 1; i >= 0; i--)
    {
        cout<< ar[i];
    }
    return 1;
}

int main()
{
    int n ,a;
    cin >> a>> n;
    // n la he , a la so can chuyen
    chuyenhe(a, n);
    return 1;
}
