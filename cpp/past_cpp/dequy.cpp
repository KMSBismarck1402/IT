#include <iostream>
using namespace std;

int dequy(int n)
{
    while (n >= 0)
    n = dequy(n-1) +n/10;
    cout << n;
    return n;
}
int main()
{
    int a;
    cin >> a;
    cout << dequy(a);
}
