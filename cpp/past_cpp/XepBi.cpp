#include <bits/stdc++.h>
using namespace std;

int tohop(int n, int k) 
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
    int n,k,i,t;
    long long s;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        n+=k;
        s=1;
        tohop(n,k);
        cout << s<<"\n";
    }
}
