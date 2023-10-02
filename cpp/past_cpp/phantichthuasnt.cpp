#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

void snt(bool a[],ull n)
{
    n=4e4;
    ull i,j;
    a[0]=a[1]=false;
    for (i=2;i<=n;i++)
    {
        a[i]=true;
    }
    for(i=2;i<=n;i++)
        if (a[i] && i <= n/i)
            for(j=i*i;j<=n;j+=i)
                a[j] = false;
}

int pttsnt(ull n)
{
    int d=0,m;
    m=sqrt(n);
    bool a[40001];
    snt(a,40001);
    ull s;
    for(ull i = 2; i <= m; i++)
    {
        if(a[i] )
        {
            s = 0;
            while(n % i == 0)
            {
                ++s;
                n /= i;
            }
            if(s )
            {
                cout << i;
                d++;
                if(s > 1)
                {
                    cout << "^" << s;
                    d+=(s-1);
                }
                if(n > i) cout <<  "x";
            }
        }
    }
    cout <<endl<< d<< endl;
}

int main()
{
    ull n;
    cin >> n;
    pttsnt(n);
}
