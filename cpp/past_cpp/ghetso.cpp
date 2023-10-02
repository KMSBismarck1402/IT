#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

inline string solve(ull n, int a[], int l)
{
    register int i, b=10-k;
    sort(a,a+k);
    string s, bs = "0123456789";
    for(int i = k-1; i>=0;i--)
        bs.erase(a[i],i);
    while(n)
    {
        s=bs[n%b]+s;
        n/=b;
    }
    return s;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--)
    {
		solve();
	}
}
