#include <bits/stdc++.h>
using namespace std;
bool ktnt(int n)
{
    int a = 2;
    while ( (n % a != 0) && (a <= n/a))
        a++;
    return a > n/a;
}

int main()
{
    freopen("SYMPRIME.INP","r",stdin);
    freopen("SYMPRIME.OUT","w",stdout);
    int j,i; int d=0,c,x;
    int h=0;
    int y=1;
    cin >> x;
    i=x/5;
    int a[i];
    if (ktnt(x) )
    {
    do
    {
        if (ktnt(i) )
        {
            a[h] = i;
            h+=1;
            if (i > x)
            {
                y=0;
            }
        }
    }while(y!=0);
    j = (a[h] + a[h-2])/2;
    if (a[h-1] == j)
    {
        cout << "YES";
    }
    else if(a[h-1] != j)
       cout << "NO";
    }
}
