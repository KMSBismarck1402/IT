#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long n,k,i;
    cin >> n >>k;
    cout << (long long)(floor(k*(log10(n)))+1);
}
