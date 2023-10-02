#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long d;
    int k,a,b,c,i,s;
    cout << "nhap so k can tim ";
    cin >> k;
    b=k;
    s=1;
    while (b > 10)
    {
        s = s+1;
        b = b/10;
    }
    b = 0;
    for (c = 1 ; c <= s ; c++)
    {
        while (b < k)
        {
            b = b+(9*pow(10,s));
        }
    }

}
