#include <iostream>
using namespace std;

int sochuso(int n)
{
    if (n < 10)
        return 1;
    return sochuso(n/10) + 1;
}

int main ()
{
    int a;
    cin >> a;
    cout << sochuso(a);
}
