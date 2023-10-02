#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define mx 5007
ll const md = 1e9 + 7;

int n, C[mx], a[mx], t, f[mx], s[mx][mx], lst[mx], ans;
char lt[mx];

int main()
{
	cin >> n >> lt + 1;
	s[0][0] = 1;
	for (int i = 1; i <= n; ++i)
		if (lt[i] != lt[i - 1])
			a[++t] = lt[i] - 'a';
	C[0] = 1;
	for (int i = 1; i < n; ++i)
		for (int j = i; j > 0; --j)
			C[j] += C[j - 1], C[j] >= md ? C[j] -= md : 0;
	for (int i = 1; i <= t; ++i)
	{
		for (int j = 1; j <= i; ++j)
		{
			f[j] = s[i - 1][j - 1];
			if (lst[a[i]])
			{
				f[j] -= s[lst[a[i]]][j - 1];
				f[j] < 0 ? f[j] += md : 0;
			}
		}
		lst[a[i]] = i;
		s[i][0] = 1;
		for (int j = 1; j <= i; ++j)
		{
			ans = (ans + (ll)C[j - 1] * f[j]) % md;
			s[i][j] = s[i - 1][j] + f[j];
			s[i][j] < md ? 0 : s[i][j] -= md;
		}
	}
	cout << ans;
}