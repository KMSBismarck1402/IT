#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,i,x,j,t,d=0;
    long long s=0;
    cin >> n >> q;
    int *a=new int[n];
    bool *b = new bool[n];
    memset(b,0,sizeof(b));
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        s+=a[i];
    }
    for(i=0;i<q;i++)
    {
        cin >> t;
        if(t==1)
        {
            cin >> j >> x;
            if(d==0)
            {
                s = s-a[j-1] + x;
                a[j-1] = x;
            }
            else
            {
                if(b[j-1]==0)
                {
                    s = s-d+x;
                    a[j-1]=x;
                }
                if(b[j-1])
                {
                    s=s-a[j-1]+x;
                    a[j-1]=x;
                }
            }
            b[j-1]=1;
        }
        if(t==2)
        {
            cin >> x;
            s = x*n;
            d=x;
            memset(b,0,sizeof(b));
        }
        cout << s <<"\n";
    }
    delete[]a;delete[]b;
}

/*
5 5
1 2 3 4 5
1 1 5
2 10
1 5 11
1 4 1
2 1
*/
