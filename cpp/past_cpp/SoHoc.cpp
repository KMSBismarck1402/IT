#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,x,d,i=0,n,m=0;
    cin >> a >> b;
   if(a==b)
    {
        cout << 2 <<"\n";
        return;
    }
    if(a<b)
    {
        cout << 1 <<"\n";
        return;
    }
    if(b!=1)
    {
        x = log(a)/log(b);
      //  if(pow(b,x) != a)
            x++;
    }
    else if(b==1)
    {
        b+=1;
        x = log(a)/log(b);
      //  if(pow(b,x) != a)
            x++;
        x++;
        m=1;
    }
    n=x;
 //   cerr << x << " ";
    for(i=1;i<=n;i++)
    {
        b+=1;
        d = log(a)/log(b);
      //  if(pow(b,d) != a)
            d++;
        if(m )
            d++;
   //     cerr << d << " ";
        d+=i;
    //    cerr << d << " " ;
        x = min(x,d);
    }
    cout << x<< "\n";

}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

/*
7
2 1
9 2
125 526
501 1
1 1
1000000 4
9513218 667
*/
