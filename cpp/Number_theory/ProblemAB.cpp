#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
    ll tmp,md;
    ll s=1,g;
    int ck=0;
    int k=0;
    int lastdigit[10]={0};
    lastdigit[9]=1;
    int n,m;
    cin >> n;
    ll *a = new ll[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    cin >> m;
    ll *b = new ll[m];
    for(int i=0;i<m;i++)
        cin >> b[i];
    ll *d = new ll[n*m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            g=gcd(a[i],b[j]);
            if(b[j]!=1 && g!=1)
            {
                d[k++]=g;
                a[i]=a[i]/g;
                b[j]=b[j]/g;
            }
        }
    }
    for(int i=0;i<k;i++)
    {
        md=0;
        s*=d[i];
        if(s>999999999)
            ck=1;
        for(int j=9;j>=1;j--)
        {
            tmp=lastdigit[j]*d[i];
            lastdigit[j]=(tmp + md)%10;
            md=(tmp + md)/10;
        }
    }
    if(ck)
        for(int i=1;i<=9;i++)
            cout << lastdigit[i];
    else
        cout << s;
    cout << "\n";
    delete []a;
    delete []b;
    delete []d;
} 