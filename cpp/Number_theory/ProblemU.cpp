#include <bits/stdc++.h>
using namespace std;

int main()
{
    int mx = 10000001;
    bool *b = new bool[mx]{0};
    int *ans = new int[mx]{0};
    int t,n,i,j;
    int m = sqrt(mx);
    b[0]=b[1]=true;
    for(i=2;i<=m;++i)
        if(b[i]==0)
            for(j=i;j<=mx/i;++j)
                b[i*j] = true;
    ans[2] = 1;
    for(i=3; i<=mx; i++)
        if(b[i]==0 && i%2!=0)
            ans[i] += ans[i-1]+1;
        else
            ans[i] = ans[i-1];
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << ans[n]-ans[n/2]<<"\n";
    }
    delete[]ans;
    delete[]b;
} 