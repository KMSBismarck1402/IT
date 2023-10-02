#include <iostream>
#include <algorithm>
using namespace std;
typedef long long s64;

struct Pair {
	s64 val;
	int cnt;
};

const int mxN = 1e6;
Pair a[2 * mxN];

void solve() {
	s64 n, x, cntM = 0, cnt2M = (s64)1e18, cnt3M = 0;
	cin >> n >> x;
	for (int i = 0; i < 2 * n; i += 2) {
		cin >> a[i].val;
		a[i].cnt = 0;
		a[i + 1].val = x ^ a[i].val;
		a[i + 1].cnt = 1;
	}
	sort(a, a + 2 * n, [](Pair a, Pair b) {
		if (a.val != b.val) {
			return a.val < b.val;
		}
		return a.cnt < b.cnt;
			});
	int i = 0, uniq = 0;
	while (i < 2 * n) {
		s64 temp = a[i].val;
		int cnt2 = 0, cnt3 = 0;
		while (a[i].val == temp) {
			if (a[i].cnt != 0) {
				cnt2++;
			}
			else {
				cnt3++;
			}
			i++;
		}
		int cnt = cnt2 + cnt3;
		if (cnt >= cntM) {
			cntM = cnt;
			if (cnt2 <= cnt2M) {
				cnt2M = cnt2;
			}
		}
		if (cnt3 >= cnt3M) {
			cnt3M = cnt3;
		}
		uniq++;
	}
	if (uniq == 1) {
		if (a[0].val == x) {
			cout << cnt3M + cnt2M << " " << 0 << endl;
			return;
		}
	}
	if (x == 0) {
		cout << cnt3M << " " << 0 << endl;
	}
	else {
		cout << cntM << " " << cnt2M << endl; 
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	//freopen("XOR.inp", "r", stdin);
	//freopen("XOR.out", "w", stdout);
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
