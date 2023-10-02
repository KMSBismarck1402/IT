#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
typedef unsigned long long ull;
#define md 1000000007

int gcd(int a, int b)
{
    if (b==0)
        return a;
    else
        return gcd(b,a%b);
}

int main()
{
    ull a[510], b[510], f[25050], dm[51];
	ull s,ans,i,j ,k,d,n=1,bc;
	while(1)
	{
		cin >> n;
        if(!n)
            break;
		for(i=0 ; i<n; i++)
			cin >> a[i];
		for(i=0; i<n; i++)
			cin >> b[i];
		s=0;
		for(i=0 ; i<n; i++)
		{
			dm[i] = b[i] - a[i];
			s += dm[i];
		}
		for(i=0 ; i<=s; i++)
			f[i] = i;
		for(i=0 ; i<n ; i++)
		{
			for(j=2 ; j<=dm[i]; j++)
			{
				d=j;
				for(k=2; k<=s; k++)
				{
					bc = gcd(d,f[k]);
					f[k]/=bc;
					d/=bc;
					if(d==1)
						break;
				}
			}
		}
		ans = 1;
		for(i=2 ; i<=s ; i++)
			ans = (ans%md * f[i]%md)%md;
		cout << ans << "\n";
	}
	return 0;
}