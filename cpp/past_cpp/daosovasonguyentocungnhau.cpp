#include <bits/stdc++.h>
using namespace std;

int NTCN(int a,int b)
{
    int r;
    while(b)
        r = a % b, a = b, b = r;
    return (a == 1);
}

int main ()
{
    int a ,b,c,i;
    cin >> a;
    b =a;
    int s = 1;
    while (b > 10)
    {
        b = b/10 ;
        s = s+1;
    }
    s=0;
    b =a;
    for (i=1;i<=s;i++)
    {
        b = b*10 + a%10;
    }
    cout << NTCN(a,b);
}
