#include <bits/stdc++.h>
using namespace std;

int sohinhvuong(int m , int n)
{
    int a;int i; int b = n+1;
    for (i= 1 ; i <= b ; i++)
    {
        a += m*n;
        m --;
        n --;
    }
    return a;
}

int sohinhchunhat(int m ,int n)
{
    int i,a,b,x;
    x = 0;a=0;b=0;
    for (i = 1 ; i<= m ; i++)
    {
        a +=i;
    }
    for (i =1 ; i<= n ; i++)
    {
        b+=i;
    }
    x = a*b;
    x+= sohinhvuong(m,n);
    return x;
}
int main()
{
    int b,m,n;
    cin >> m >> n;
    if (n > m)
    {
        b = n;
        n = m;
        m = b;
    }
    cout << sohinhchunhat(m,n);
}
