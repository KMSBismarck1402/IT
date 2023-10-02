#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    freopen("KTHDIV.INP","r",stdin);
    freopen("KTHDIV.OUT","w",stdout);
    ll n,k,d;
    int i;
    vector<ll> v;
    cin >> n >> k;
    d=sqrt(n);
    for(i=1;i<=d;i++)
    {
        if(!(n%i))
        {
            v.push_back(i);
            if(i!=d)
                v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    if(k<=v.size())
        cout << v[k-1];
    else
        cout << -1;
}

/*
5 2
*/
