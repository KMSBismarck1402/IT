#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const int m = 100001;
vector<ll> p;
 
void snt()
{
    bool b[m+1];
    int i,j;
    for(i=2; i<=m; i++)
    {
        if(b[i]==0)
        {
            p.push_back(i);
            for(j=2; i*j<= m; j++)
                b[i*j]= 1;
        }
    }
}

int main()
{
    snt();
    ll t,n,i,phi;
    cin >> t;
    while(t--)
    {
        cin >> n;
        phi =n;
        for(i=0; p[i]*p[i]<=n; i++)
        {
            if (n%p[i]==0)
            {
                phi-=(phi/p[i]);
                while(n%p[i]==0)
                n/=p[i];
            }
        }
        if(n>1)
            phi-=(phi/n);
        cout << phi <<"\n";
    }
}