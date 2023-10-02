#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n>>k;
    (n & ((1 << k) - 1)) ? cout <<"No"
                        : cout << "Yes";
}
