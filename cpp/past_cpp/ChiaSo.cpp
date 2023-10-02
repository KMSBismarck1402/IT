#include <bits/stdc++.h>
using namespace std;
static bool b[40001];

void snt(int n)
{
    int i,j;
    b[0]=b[1]=false;
    for (i=2;i<=n;i++)
    {
        b[i]=true;
    }
    for(i=2;i<=n;i++)
        if (b[i] && i <= n/i)
            for(j=i*i;j<=n;j+=i)
                b[j] = false;
}

int pttsnt(int n)
{
    int s; int d=0;
    for(int i = 2; i <= n; i++)
    {
        if(b[i] )
        {
            s = 0;
            while(n % i == 0)
            {
                ++s;
                n /= i;
            }
            if(b )
            {
                d++;
                if(s > 1)
                    d+=(s-1);
            }
        }
    }
    return d;
}

int solve(int a,int b,int k)
{
    int ma;
    if(k==1)
        return(a!=b)&&(b%a==0||a%b==0);
    ma = pttsnt(a)+pttsnt(b);
    return k<=ma;
}

int main()
{
    int t,a,b,k;
    cin >> t;
    snt(4e4);
    while(t--)
    {
        cin >> a >> b >>k;
        if(solve(a,b,k))
            cout <<"YES \n";
        else
            cout <<"NO \n";
    }
}

/*
2
36 48 3
36 48 50
*/
