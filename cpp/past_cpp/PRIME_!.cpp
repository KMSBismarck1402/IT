#include <bits/stdc++.h>
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
    int x ,i;
    cin >> x;
    cout << "2 ";
    for ( i = 2 ; i <= x   ; i++)
    {
        if (ktnt(i) ){cout << i << " "; }
    }
}
