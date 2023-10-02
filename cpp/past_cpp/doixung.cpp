#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int sochuso(int n) {
	return floor(log10(n) + 1);
}

int power(int a, int n) {
	int ans = 1;
	for (int i = 0; i < n; i++) {
		ans *= a;
	}
	return ans;
}

int make(string s, int len) {
	string temp = s;
	int i = len % 2 == 0 ? s.length() - 1 : s.length() - 2;
	for ( ; i >= 0; i--) {			
		temp += s[i];
	}
	return stoi(temp);
}

int calc(int s) {
	int ans;
	int half;
	string ss = to_string(s);
	if (ss.length() % 2 == 0) {
		half = stoi(ss.substr(0, ss.length() / 2));
	}
	else {
		half = stoi(ss.substr(0, ss.length() / 2 + 1));
	}
	int scs = sochuso(half);
	if (make(to_string(half), ss.length()) > s) {
		half--;
	}
	half *= 2;
	return ss.length() % 2 == 0 ? half + power(10, scs) - half / 2 - 1 : half + power(10, scs - 1) - half / 2 - 1;
}

void solve() {
	int m, n;
	cin >> m >> n;
	cout << calc(n) - calc(m - 1);
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
