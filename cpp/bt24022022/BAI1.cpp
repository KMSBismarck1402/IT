#include <bits/stdc++.h>
using namespace std;

static bool b[1000001];

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
    int a,c,i,d=0,s,v,n;
    cin >> a >> c;
    for(i=a;i<=c;i++)
    {
        if(b[i])
        {
            n=i;
            s=0;
            while(n>0)
            {
                v=n%10;
                s=s+v;
                n=n/10;
            }
          //  cerr << s<<" ";
            if(s%5==0)
            {
              // cerr << i <<" ";
                d++;
            }
        }
    }
    cout << d << "\n";
}

int main ()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    freopen("BAI1.INP","r",stdin);
    freopen("BAI1.OUT","w",stdout);
    int t,n;
    snt(b,1000001);
    cin >> t;
    while(t--)
        solve();
}

/*
2
1 15
5 30
*/
