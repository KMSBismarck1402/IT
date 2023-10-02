#include <bits/stdc++.h>
using namespace std;

void snt(bool a[],int n)
{
    int i,j;
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

int main()
{
    freopen("DRPIME3.INP","r",stdin);
    freopen("DPRIME3.OUT","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,x,y,z,d=0;
    cin >> n;
    bool *a = new bool[n+1];
    snt(a,n);
    for(z=13;z<=n;z+=4)
    {
        if(a[z] )
        {
            x=2;
            for(y=3;y<z;y+=2)
            {
                if(a[y] )
                {
                    if(4 + y*y == z)
                    {
                        cout << x <<" "<<y<<" "<<z<<"\n";
                        d++;
                    }
                }
            }
        }
    }
    if(d==0)
        cout << -1;
}
