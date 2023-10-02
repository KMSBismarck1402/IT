#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long a;
    int i,n;
    cin >>n;
    if (n%2 != 0)
    {
        i = 3;
        a = 1;
    }
    if(n%2 == 0)
    {
        i = 4;
        a = 2 ;
    }
    while (i <= n)
    {
        a = a*i;
        i +=2;
    }
    cout << a;
}
