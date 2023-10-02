#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a;int b;
    cin >> a >> b;
    double x = b*log10(a);
    cout << int(ceil(x) - 1);
    return 0;
}
