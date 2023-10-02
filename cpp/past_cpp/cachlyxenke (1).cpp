#include <iostream>
#include <string>
using namespace std;

void solve() {
	int n;
	cin >> n;
	string s;
	cin >> s;
	if (s.length() != n) {
		return;
	}
	int i = 0, ans = 0;
	if (s[0] == '0' && s[1] == '0') {
		ans++;
		s[0] = '1';
	}
	while (i < n) {
		if (s[i - 1] == '0' && s[i + 1] == '0' && s[i] == '0') {
			ans++;
			s[i] = '1';
		}
		i++;
	}
	if (s[n - 1] == '0' && s[n - 2] == '0') {
		ans++;
		s[n - 1] = '1';
	}
	cout << ans;
}

int main() {
	int t = 1;
	//cin >> t;
	while (t--) {
		solve();
	}
}
