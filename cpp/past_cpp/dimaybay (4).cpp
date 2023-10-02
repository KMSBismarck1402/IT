#include <iostream>
using namespace std;

void solve() {
	int a, b, c, d, e;
	cin >> a >> b >> c >> d >> e;
	if (a + b <= d && c <= e) {
		cout << "YES" << endl;
		return;
	}
	if (a + c <= d && b <= e) {
		cout << "YES" << endl;
		return;
	}
	if (b + c <= d && a <= e) {
		cout << "YES" << endl;
		return;
	}
	cout << "NO" << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
