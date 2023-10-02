#include <bits/stdc++.h>
using namespace std;

void snt(bool x[],int b)
{
    int i,j;
    x[0]=x[1]=false;
    for (i=2;i<=b;i++)
    {
        x[i]=true;
    }
    for(i=2;i<=b;i++)
        if (x[i] && i <= b/i)
            for(j=i*i;j<=b;j+=i)
                x[j] = false;
}

void solve()
{
    int a,b,d,i,y,s,c,t,an=0;
    cin >> a >> b;
    bool *x = new bool[b+1];
    d=a;
    while(d%3!=0)
    {
        d++;
    }
    snt(x,b);
    for(i=d;i<b;i+=3)
    {
        t=i;
   //     cerr << t<< " ";
        c=1;
        for(y = 2; y <= t; y++)
        {
            if(x[y] )
            {
                s = 0;
                while(t % y == 0)
                {
                    ++s;
                    t/= y;
                }
         //       if(x )
           //     {
              //      cerr << y;
                    if(s > 1)
                    {
             //           cerr << "^" << s<<" ";
                        c = c*(s+1);
             //           cerr << c << " ";
                    }
           //         if(t > y) cerr <<  "x";
             //   }
            }
        }
        if(c==9)
            an++;
    }
    cout << an<<"\n";
    delete []x;
}

int main()
{
    freopen("SDB.INP","r",stdin);
    freopen("SDB.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t-- )
        solve();
}
