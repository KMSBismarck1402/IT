#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[5000],b,c,d,i,x;
    cin >> x;
    b=1;
    while (b <= x)
    {
        b = b+c;
        c = b;
    }
    cout << x << " " << b;
}
