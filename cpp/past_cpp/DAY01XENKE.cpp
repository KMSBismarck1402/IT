#include <bits/stdc++.h>
using namespace std;

int demSoChuSoDeQuy(int nInput)
{
	if (nInput < 10)
	{
		return 1;
	}
	return 1 + demSoChuSoDeQuy(nInput / 10);
}

int main ()
{
    freopen("DAY01XENKE.INP","r",stdin);
    freopen("DAY01XENKE.OUT","w",stdout);
    int a,n,i,s,x,y;
    cin >> a;
    n = demSoChuSoDeQuy(a);
    int m[n];
    for (i=n-1;i >= 0 ; i--)
    {
        m[i] = a%10;
        a/=10;
    }
    for (i = 0 ; i < n ; i++)
    {
        if (m[i] == 0 && m[i+1] == 1)
        {
            s+=1;
            x = i;
            y = i+1;
        }
    }
    if (s == 1)
    {
        cout << x << " "<< y;
    }
    if (s != 1)
    {
        cout <<s;
    }

}
