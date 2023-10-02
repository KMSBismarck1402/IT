#include <iostream>
#include <math.h>
using namespace std;

bool ktnt(int n)
{
    int a = 2;
    while ( (n % a != 0) && (a <= n/a))
        a++;
    return a > n/a;
}

int main ()
{
    int y ,i,b;
    b=0;
    cout << "y = ";
    cin >> y;
    for ( i = 2 ; i <= y   ; i++)
    {
        if (ktnt(i) )
        b+=1;
    }
    cout << b;
}
