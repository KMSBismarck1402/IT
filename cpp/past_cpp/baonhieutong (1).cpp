#include <iostream>
using namespace std;
typedef unsigned long long u64;

const int MAX = 1e7;
u64 a[MAX];

int main() {
	int n, k;
	cin >> n >> k;
	a[0] = 1;
	a[1] = 1;
	u64 sum = 2, sum2 = 1;
	int mod = 1e9 + 7;
	for (int i = 2; i <= k; i++) {
		a[i] = (a[i - 1] * 2) % mod;
		sum += a[i] % mod;
	}
	for (int i = k + 1; i <= n; i++) {
		a[i] = (sum - sum2) % mod;
		sum += a[i] % mod;
		sum2 += a[i - k] % mod;
	}
	cout << a[n]<<'\n';
}
