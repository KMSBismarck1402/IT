#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,ans=0;
    long long s=0,d;
    cin >> n;`
    int a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        s+=a[i];
    }
    if(s%n!=0)
        cout << "-1 \n";
    else
    {
        d=s/n;
        for(i=0;i<n;i++)
            if(a[i]>d)
                ans++;
        cout << ans<<"\n";
    }

}
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
}


/*
4
6
6 1 10 30 42 7
5
5 8 1 7 10
3
4 4 4
5
2 7 7 7 7
*/
