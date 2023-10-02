#include <bits/stdc++.h>
using namespace std;

bool ktnt(int n)
{
    int a = 2;
    while ((n % a != 0) && (a <= n/a))
        a++;
    return a > n/a;
}

int main()
{
    int a;
    cin >> a;
    cout << ktnt(a);
}
