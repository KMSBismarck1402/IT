#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int chuyenhe(ull a)
{
    static char hTab[] = "0123456789ABCDEF";
    if(a>=16)
        chuyenhe(a/16);
    cout << hTab[a%16];
}

int main()
{
    ull a;
    cin >> a;
    chuyenhe(a);
}
