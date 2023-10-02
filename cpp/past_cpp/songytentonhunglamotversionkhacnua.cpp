#include <iostream>
#include <math.h>
using namespace std;

bool ktnt(int n)
{
    int a = 2;
    while ( (n % a != 0) && (a <= n/a))
        a++;
    return a >= n/a;
}
int main ()
{
    int x,y,i;
    cout << "nhap so nguyen to x = " ;
    cin >> x;
    x = 0;
    cout <<"y = ";
    cin >> y;
    for (i = 1 ; i < y; i++)
    {if ( ktnt(x) == 1);
        cout << x << " ";
    if ( ktnt(x) == 0)
        cout << " ";
    }
}
