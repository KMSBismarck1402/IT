#include <iostream>
using namespace std;

int scs(int a)
{
    if (a < 10)
        return 1;
    return a = scs(a/10) + 1;
}
int main ()
{
    int a ;
    cin >> a ;
    cout << scs(a);
}
