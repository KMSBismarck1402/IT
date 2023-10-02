#include <bits/stdc++.h>
using namespace std;

/*int laykso(int k, int m)
{
    int i,s=0,d;
    d = pow(10,k);
    m = m%d;
    cout << m;
}

int main()
{
    int s,i,e;
    cin >> s;
    int a[s],n[s],k[s],m[i],b,c;
    float d[s];
    for (i = 0; i< s; i++)
    {
        cin >> a[i] >> n[i] >> k[i];
    }
    for (i = 0; i< s; i++)
    {
        e=k[i];
        b = a[i]+2; c =a[i];
        d[i] = pow(pow(sqrt(b) + sqrt(c),2),n[i]);
        m[i] = (int) d[i];
        laykso(e,m[i]);
        cout << endl;
    }
}*/

int tinhmu(int a, int n)
{
    double m = 1;
    for(int i = 1; i <= n; i++)
        m *= (sqrt(a + 2) + sqrt(a)) * (sqrt(a + 2) + sqrt(a));
    return m;
}

int main()
{
    int a,n,k,t=1;
    int m;
    cin >> a >> n >> k;
    m = tinhmu(a,n);
    for(int i = 1; i <= k; i++)
        t *= 10;
    cout << m % t;
}
