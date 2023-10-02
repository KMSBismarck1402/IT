#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i=0,x=1;
    cin >> n;
    n+=1;
    do
    {
        x<<=1;
    }while(x<=n/2);
    if(n==1)
        x>>=1;
    cout << x<<endl;
}
int main()
{
    int t;
    cin >> t;
    while(t-- )
        solve();
}
