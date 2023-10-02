#include <bits/stdc++.h>
using namespace std;

int main()
{
    int64_t n,k;
    cin >> n>>k;
    cout << (n & ((1 << k)-1));
}
