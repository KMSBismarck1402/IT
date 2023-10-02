#include <iostream>
using namespace std;

int highestpow2(int n) {
	int m = n;
	n--;
	n |= n >> 1;
	n |= n >> 2;
	n |= n >> 4;
	n |= n >> 8;
	n |= n >> 16;
	n++;
	n >>= 1;
	return n;
}

bool checkpow2(int n) {
	return !(n == 0) && !(n & (n - 1));
}

void solve() {
	int n;
	cin >> n;
	int pow2 = highestpow2(n);
	n = checkpow2(n) ? n - 1 : n;
	cout << max(n - pow2 + 1, pow2 - pow2 / 2 + 1) << "/n";
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	int t = 1;
	cin >> t;
	while (t--)
		solve();
}
