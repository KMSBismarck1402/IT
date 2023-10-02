#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

const int mx=100000001;
ull a[mx];
bool b[mx]={0};

void snt()
{
    int i,j,m=sqrt(mx);
    b[0]=b[1]=true;
    for(i=2;i<=m;++i)
        if(b[i]==0)
            for(j=i;j<=mx/i;++j)
                b[i*j] = true;
    a[2]=1;
    for(i=3;i<mx;i+=2)
    {
        if(!b[i])
            a[i+1]=a[i]=a[i-1]+1;
        else
            a[i+1]=a[i]=a[i-1];
    }
}

int main()
{
    int n;
    double x,y,ans;
    snt();
    cin >> n;
    while(n)
    {
        x = a[n];
        y = double(n)/log(double(n));
        y = abs(x-y);
        ans = (y/x) * 100;
        cout << fixed << setprecision(1)<< ans <<"\n";
        cin >> n;
    }
}