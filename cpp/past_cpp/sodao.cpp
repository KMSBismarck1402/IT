#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,i,s,e;
    cout << "nhap vao 1 so nguyen ";
    cin >> a;
    int o[10];
    b = a;
    s = 1;
    while (b > 10)
    {
        s = s+1;
        b = b/10;
    }
    for (i =1 ; i <= s ; i++)
    {
        o[i] = a%10;
        b = ( a-(a%10))/10;
        e = (a%10)*pow(10,s-1);
        a= (b + e);
    }
    a=0;
    for (i =1 ; i <= s ; i++)
    {
        a = (a+o[i]) * 10;
    }
    a = a/10;
    a = a%19;
    cout <<a;
}
