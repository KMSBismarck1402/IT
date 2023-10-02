#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool a[50001];
int p[50001];
int d=0;
const ll md=1000000007;

void snt()
{
	memset(a,false,sizeof(a));
	for(int i=2;i<50001;i++)
	{
		if(!a[i])
		{
			p[d++]=i;
			for(int j=i;j<50001;j+=i)
			    a[j]=true;
		}
	}
}

int power(ll x,ll y)
{
	ll c=0;
	ll z=y;
	while(x>=z)
	{
		c=c+(x/z);
		z*=y;
	}
	return c;
}

int main() 
{
	int t,n;
	snt();
	cin >> t;
	while(t--)
	{
		cin >> n;
		ll ans=1;
		for(int i=0;i<d;i++)
		{
			ll ep=power(n,p[i]);
			if(ep==0)
                break;
			ans=(ans*((ll)(ep+1)))%md;
		}
		ans=ans%md;
		cout << ans << "\n";
	}
}