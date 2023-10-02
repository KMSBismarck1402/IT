#include <iostream>
using namespace std;
typedef unsigned long long ull;

int main()
{
    int m = 1000000;
    int *a = new int[m];
	int n, k;
	cin >> n >> k;
	a[0] = 1;
	a[1] = 2;
	a[2] = 4;
	a[3] = 7;
	int mod = 1e9 + 7;
	if()
	for (int i = 2; i <= k; i++)
    {
		a[i] = (a[i - 1] * 2) % mod;
		sum += a[i] % mod;
	}
	for (int i = k + 1; i <= n; i++) {
		a[i] = (mod + sum - a[i - k]) % mod;
		sum += a[i] % mod;
	}
	cout << a[n];
	delete[] n;
}
