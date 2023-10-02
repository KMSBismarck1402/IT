#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t,a,b,c,gc;
	cin>>t;
	for (int i = 1; i <= t; ++i)
	{
		cin>>a>>b>>c;
		gc=gcd(a,b);
		if(c%gc==0)
			cout<<"Case "<<i<<": Yes \n";
		else
			cout<<"Case "<<i<<": No \n";
	}
	return 0;
}