#include <bits/stdc++.h>
using namespace std;

int main()
{
    double  m,a,b;
    double n , i ,c,s;
    cin >> a >> n >> m;
    b = a;
    s = 1;
    while (b > 10)
    {
        b = b/10 ;
        s = s+1;
    }
    b = a;
    for (c =1 ; c <= n ; c++)
    {
        for (i = 1 ; i <=s ; i++)
        {
            b = (b*10) + (a % 10);
            a = a/10;
        }
    a = b ;
    s = 1;
    while (b > 10)
    {
        b = b/10 ;
        s = s+1;
    }
    b = a;
    }
    cout << "a = " <<a;
    s=1;
    while (b >10)
    {
        b = b/10;
        s++;
    }
    for (i=1 ; i <= (s-5);i++)
    {
        a = a/10;
    }
    m=a%10;
    cout << " m = "<< m;
}

