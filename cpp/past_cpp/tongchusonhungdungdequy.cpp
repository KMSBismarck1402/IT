#include <iostream>
using namespace std;
int tcs(int n)

{
    int s=0;
    for(;n!=0;)
    {
        s+=n%10;
        n/=10;
    }
    return s;
}

int main ()
{
    int a;
    cin >> a;
    cout << tcs(a);
}
