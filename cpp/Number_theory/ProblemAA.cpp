#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int n=10000000;
    int t, x,i,j;
    int *a = new int[n]{0};
    bool *b = new bool[n]{0};
    int *d = new int[n]{0};
    b[0]=b[1]=true;
    int m = sqrt(n);
    for(i=2;i<=m;++i)
        if(b[i]==0)
            for(j=i;j<=n/i;++j)
                b[i*j] = true;
    for(i=1; i<m; i++)
        d[i*i]=1;
    for(i=1; i<n; i++)
    {
        a[i]=a[i-1];
        if(b[i])
            continue;
        for(j=1; j*j*j*j<=i; j++)
        {
            if(d[i-j*j*j*j])
            {
                a[i]++;
                break;
            }
        }
    }
    cin >> t;
    while(t--)
    {
        cin >> x;
        cout << a[x]<< endl;
    }
    delete[]a;
    delete[]b;
    delete[]d;
}