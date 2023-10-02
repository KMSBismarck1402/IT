#include <bits/stdc++.h>
using namespace std;

int pttsnt(int n){
    int a,s=1;
    for(int i = 2; i <= n; i++)
    {
        a = 0;
        while(n % i == 0)
        {
            ++a;
            n /= i;
        }
        if(a)
        {
            //cout << i;
        //    if(a > 1) cout << "^" << a;
            if(n > i)
            {
                s+=1;
                //cout <<  "*";
            }
        }
    }
  //  cout << endl;
  cout << s;
}

int main()
{
 //   freopen("CPRDIV.INP","r",stdin);
 //   freopen("CPRDIV.OUT","w",stdout);
    int n, m,i,a,x=1,y=1;
    cin >>n>>m;
    a = n-m;
    if(a < m)
    {
        i =a;
        a = m;
        m = i;
    }
    for (i = (a+1); i<= n; i++)
    {
        x*=i;
    }
    for (i = 2; i<= m ;i ++)
    {
        y*=i;
    }
    x = x/y;
    pttsnt(x);
}
