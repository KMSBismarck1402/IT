#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,d , n;
    cin >> d >> n;
    a = (d+1)*(d+2);
    a /=2;
    a = a*(n+1);
    cout << a;
}
