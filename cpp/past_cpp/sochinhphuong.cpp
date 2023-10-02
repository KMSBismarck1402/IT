#include <bits/stdc++.h>
using namespace std;

int sochuso(int n)
{
    return floor(log10(n)+1);
}
int main()
{
    int n;
    cin >> n;
    cout << sochuso(n);
}
