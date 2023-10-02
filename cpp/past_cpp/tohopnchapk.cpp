#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int c(int k, int n)
{
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return c(k - 1, n - 1) + c(k, n - 1);
}

int main()
{
    int n , k;
    cin >> n >> k;
    if (k > (n-k))
    {k = n-k;}
    cout << c(k,n);
    return 0    ;
}
