#include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool ktnt(int n)
{
    int a = 2;

    while ( (n % a != 0) && (a <= n/a))
        a+=2;
    return a > n/a;
}

int main ()
{
    int y ,i,b,c;
    b=0;
    cout << "x = ";
    cin >> y;
    for ( i = 3 ; i <= y   ; i+=2)
    {
        if (ktnt(i) )
        {
            b++;
        }
    }
    cout << b;
}
