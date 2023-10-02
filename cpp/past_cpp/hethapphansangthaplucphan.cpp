#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int chuyenhe(ull a)
{
    ull i,c=0,m;
    char ar[50];
    while (a > 0)
    {
        m = a % 16;
        if (m >= 10)
        {
            ar[c] = (char) (m + 55);
            c++;
        } else
        {
            ar[c] = (char) (m + 48);
            c++;
        }
        a/=16;
    }
    for (i = c - 1; i >= 0; i--)
    {
        cout<< ar[i];
    }
}

int main()
{
    ull a;
    cin >> a;
    chuyenhe(a);
}
