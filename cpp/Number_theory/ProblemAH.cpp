#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef long long ll;

int main()
{
    const int m=100001;
    ll a[m]={0},tp[m]={0},ans;
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
		tp[i] = __gcd(a[i],tp[i-1]);
		ans = __gcd(a[i]*tp[i-1]/tp[i],ans);
	}
	cout<<ans;
	return 0;
}