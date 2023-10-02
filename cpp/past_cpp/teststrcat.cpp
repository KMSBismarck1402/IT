#include <bits/stdc++.h>
using namespace std;

int demSoChuSoDeQuy(int nInput)
{
	if (nInput < 10) // n chỉ có 1 chữ số
	{
		return 1;
	}
	return 1 + demSoChuSoDeQuy(nInput / 10);
}

int main ()
 {
    int a,n,i,s,x,y,b;
    cin >> a;
    n = demSoChuSoDeQuy(a);
    int m[n];
    for (i=n-1;i >= 0 ; i--)
    {
        m[i] = a%10;
        a/=10;
    }
}
