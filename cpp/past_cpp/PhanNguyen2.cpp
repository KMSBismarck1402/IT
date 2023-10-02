#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ULL;

ULL mp(ULL a,ULL n)
{
    ULL p =1;
    for(int i =0 ; i<n;i++)
    {
        p*=a;
    }
    return p;
}
ULL krt(ULL n, ULL k)
{
    ULL a = 1; while(mp(a+1,k) <=n)
        a++;
    return a;
}
ULL tphannguyen(ULL n,ULL k)
{
    ULL r = 0 , m = pow(n,1.0/k),b,a=1;
    for(int i=1;i< m ;i++)
    {
        b = mp(i+1,k);
        r+= (b-a)*i;
        a=b;
    }
    r+= (n- mp(m,k) +1)*m;
    return r;

}
int main()
{
    ULL n,k;
    cin >> n>>k;
    cout << tphannguyen(n,k);
}

ULL tongphannguyen(ULL n , ULL k)
{
    ULL j =2; ULL h = pow(j,k); ULL s=0,i;
    for (i=1;i<=n;i++)
    {
        if (i < h)
        {
            s=s+j-1;
        }
        else if (i = h)
        {
            j++;
            h = pow(j,k);
            s=s+j-1;
        }
    }
    return s;
}
