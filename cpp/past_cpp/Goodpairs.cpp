#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long c=0,d=0;
    int n,i;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            c=0;
            while(a[i]==a[i+1])
            {
                c++;
                i++;
            }
            d+=(1+c)*(c)/2;
        }

    }
    cout << d<<"\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
