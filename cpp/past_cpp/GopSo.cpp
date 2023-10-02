#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,d,i,s;
    int a[3];
    cin >> n;
    memset(a,0,sizeof(a));
    for(i=0;i<n;i++)
    {
        cin >> d;
        a[d%3]++;
    }
    s=min(a[1],a[2]);
    d=a[0]+s;
    a[1]-=s, a[2]-=s;
    d+=a[1]/3+a[2]/3;
    cout << d << "\n";
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}

/*
3
2
1 5
2
3 7
3
1 8 6
*/
