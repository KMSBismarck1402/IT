#include <bits/stdc++.h>
using namespace std;

void solve()
{
    unsigned long long s=0;
    int n,i;
    cin >> n;
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=0;i<n;i++)
        cin >> b[i];
    sort(a,a+n);
    sort(b,b+n);
    for(i=0;i<n;i++)
        s+=min(a[i],b[i]);
    cout << s<<endl;
    delete[] a;
    delete[] b;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t;
    cin >> t;
    while(t)
    {
        t--;
        solve();
    }
}
