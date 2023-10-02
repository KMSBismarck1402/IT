#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
    int n,x,d=0,i,j;
    cin >> n >> m;
    int *a = new int[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
	for (i=0, j=n-1; i<=j;j--)
	{
		if (a[i] + a[j]<= m)
			i++;
		d++;
	}
    cout << d;
}
