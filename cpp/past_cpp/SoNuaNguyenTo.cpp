#include <bits/stdc++.h>
using namespace std;

void snt(bool b[],int n)
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

void solve()
{
    int nl
    cin >> n;

}

int main()
{
    int n;
    cin >> t;
    while(t )
    {
        solve();
        t--;
    }
}
