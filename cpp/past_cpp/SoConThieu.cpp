#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int a,i;
    ll d=0,n;
    cin >> n;
    i=n-1;
    while(i--)
    {
        cin >> a;
        d+=a;
    }
    cout << n*(n+1)/2-d;
}
