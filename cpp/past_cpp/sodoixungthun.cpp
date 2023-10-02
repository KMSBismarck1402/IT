#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a,b,c,i,d,e,f;
    int x[] = {0,9,18,108,198,9198,18198,108198,198198,1098198,1998198};
    int y[] = {9,9,90,90,900,900,9000,9000};
    cin >> a;
    i = 0;
    while (a > x[i])
    {
        i++;
    }
    cout << i << " ";
    i = i-1;
    cout << i << " ";
    b = a - x[i];
    cout << b << " ";
    f = pow(10,(i/2)-1);
    cout << f << " ";
    d = (b - (b % f));
    cout << d << " ";
    e = (f + (b / 10));
    cout << e<< " ";
    if (i %2 == 0){cout << (b%10)-1<< " ";}
    for (c = 1; c<= ((i/2));c++)
    {
        cout << (e%10);
        e = e/10;
    }
}
