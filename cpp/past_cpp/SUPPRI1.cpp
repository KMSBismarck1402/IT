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
    long long x,i;
    int s,z;
    cin >> x;
    i =x ;
    s=1;
    z=0;
    while(i > 10)
    {
        s = s+1;
        i /=10;
    }
    for (i=1 ; i<= s;i++)
    {
        if (ktnt(x)){z+=1;}
        x /=10;
    }
    if (z==s){cout << "true";}
    else{cout << "false";}
}
