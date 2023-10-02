#include <bits/stdc++.h>
using namespace std;

unsigned long long c(unsigned long long k, unsigned long long n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return c(k - 1, n - 1) + c(k, n - 1);
}

int main()
{
    unsigned long long n , k;
    cin >> n >> k;
    if (k > (n-k))
    {k = n-k;}
    cout << c(k,n);
}
