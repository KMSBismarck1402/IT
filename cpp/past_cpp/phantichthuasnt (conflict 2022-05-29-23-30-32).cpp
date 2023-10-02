#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

void snt(bool a[],ull n)
{
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
    bool *a = new bool[n+1];
    snt(a,n);
    ull s;
    for(ull i = 2; i <= n; i++)
    {
        if(a[i] )
        {
            s = 0;
            while(n % i == 0)
            {
                ++s;
                n /= i;
            }
            if(a )
            {
                cout << i;
                if(s > 1) cout << "^" << s;
                if(n > i) cout <<  "x";
            }
        }
    }
    cout << endl;
}

int main()
{
    ull n;
    cin >> n;
    while(n)
    {
        pttsnt(n);
        cin >> n ;
    }
}
