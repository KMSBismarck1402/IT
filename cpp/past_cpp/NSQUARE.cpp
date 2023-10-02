#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,j;
    int a,i;
    int x[100]; int  y[100];
    int b,c,d;
    b=0;
    cin >> n; d = 0;
    for(i = 2; i <= n; i++)
    {
        a = 0;
        while(n % i == 0)
        {
            ++a;
            n /= i;
        }
        if(a)
        {
            cout << a << " ";
            x[b]=i; b++;
            if(a > 1)
            {
                c  = b+a-1;
                for (j=0;b < c; b++)
                {
                    x[b] = i;
                }
                if (a%2 != 0)
                {
                    y[d] = i;
                    d++;
                }
            }

        }
    } cout << b << " "<<d<<" ";
   for (i = 0 ; i < b ; i++)
   {
       cout << x[i] <<" ";
   }cout << endl;
   for (i =0 ; i < d ; i++)
   {
       cout << y[i];
   }
}
