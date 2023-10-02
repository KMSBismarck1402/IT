#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b=3,n;
    int s =42;
    while (2*b <= 42)
    {
        a = (42 - 2*b)/3;
        cout << "a = "<<a <<" b = " << b << endl;
        b+=3;
    }
}
