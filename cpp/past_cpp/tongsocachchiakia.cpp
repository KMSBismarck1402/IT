#include <bits/stdc++.h>
using namespace std;

unsigned long long tohop(int n, int k)
{
    int s = 1;
    if(k > n - k)
        k = n - k;
    for(int i = 1, j = n; i <= k;i++,j--)
        s = s * j / i;
    return s;
}

int main()
{
    int n,m = 0,s=0,c=1,j;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] > m)
            m = a[i];
        s += a[i];
    }
    for(j = 0; a[j] != m; j++)
    {
        c *= tohop(s,a[j]);
        s -= a[j];
    }
    j++;
    for(j; j < n; j++)
    {
        c *= tohop(s, a[j]);
        s -= a[j];
    }
    cout << c;
}
