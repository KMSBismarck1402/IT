#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll tohop(ll n, ll k) 
{
	if (k == 0 || k == n) 
		return 1;
	if (k > n - k) 
		k = n - k;
	if (k == 1) 
		return n;
	return tohop(n - 1, k - 1) + tohop(n - 1, k);
}

int main()
{
    int a,b,c,i,t;
    ll s;
    cin >> t;
    while(t--)
    {
        cin >> a >> b >> c;
        s=tohop(a+b+c,a)*tohop(b+c,b);
        cout << s<<"\n";
    }
}

/*
3
1 1 1
2 2 0
*/ 