#include <bits/stdc++.h>
using namespace std;

void giai()
{
	int n,i,d;
	cin >> n;
	string s;
	cin >> s;
	if (s.length() != n)
		return 0;
    i = 0, d= 0;
	if (s[0] == '0' && s[1] == '0')
	{
		d++;
		s[0] = '1';
	}
	while (i < n)
    {
		if (s[i - 1] == '0' && s[i + 1] == '0' && s[i] == '0')
		{
			d++;
			s[i] = '1';
		}
		i++;
	}
	if (s[n - 1] == '0' && s[n - 2] == '0')
	{
		d++;
		s[n - 1] = '1';
	}
	cout << d;
}

int main()
{
	cin >> n;
	while (n--)
		giai();
}

