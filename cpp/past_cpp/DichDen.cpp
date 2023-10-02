#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,a=0;
    cin >> n;
    while(n)
    {
        if(n%2)
        {
            n--;
            a++;
        }
        else if(n==2)
        {
            n--;
            a++;
        }
        else
        {
            n/=2;
            a+=2;
        }
    }
    cout << a<<"\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t, n;
    cin >> t;
    while(t--)
        solve();
}
