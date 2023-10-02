#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

void solve()
{
    ull d=0;
    int n,i,x=0,y=0,k;
    cin >> n;
    ull *a = new ull [n];
    ull *b = new ull [n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        d+=a[i];
        if(a[i]%2==1)
            x++;
    }
    for(i=0;i<n;i++)
    {
        cin >> b[i];
        d+=b[i];
        if(b[i]%2==1)
            y++;
    }
    k=max(x,y)-min(x,y);
    k/=2;
    d/=2;
    cout << d-k<<endl;
    delete[] a;
    delete[] b;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while(t)
    {
        t--;
        solve();
    }
}

/*
2
3
4 5 6
2 1 3
5
2 8 6 4 1
2 5 9 2 9
*/
