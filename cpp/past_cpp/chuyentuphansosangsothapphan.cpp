#include  <bits/stdc++.h>
using namespace std;

int UCLN(int a,int b){
    if (a%b!=0)
        return UCLN(b,a%b);
    else
        return b;
}

int main()
{
    unsigned long long  d,i,t,m;
    double a;
    cin >> t>>m;
    int ucln = UCLN(t,m);
    t=t/ucln;
    m=m/ucln;
    if (m!=1)
    {
        if (m<0)
        {
            m=m*-1;
            t=t*-1;
        }
    }
  //  a = (double)n/m; //   cout << a;
    while (t/m )
    {

    }
    for (i=
    {
        d=pow(10,n)*t%m;

    }
}
