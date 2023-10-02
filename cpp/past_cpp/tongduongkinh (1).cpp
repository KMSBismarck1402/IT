#include <bits/stdc++.h>
using namespace std;

bool sosanh(int a, int b)
{
    return b>=a;
}

unsigned long long ans(int a[], int b[], int n)
{
    unsigned long long s=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]>=b[i])
            s+=b[i];
        else s+=a[i];
    }
    return s;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int n, t, a[10000], b[10000];
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n;
        for(int j=0;j<n;j++)
            cin >> a[j];
        for(int j=0;j<n;j++)
            cin >> b[j];
        sort(a,a+n,sosanh);
        sort(b,b+n,sosanh);
        cout << ans(a, b, n) << "\n";
    }
}
