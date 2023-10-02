#include <iostream>
#define endl "\n"
using namespace std;
typedef unsigned long long u64;

const int prime[] = { 3, 5, 7, 11, 13, 17, 23, 27, 29, 31, 37, 41, 43, 47, 53 };
const int N = sizeof(prime) / 4;

void solve() {
	 u64 n;
	 cin >> n;
	 if (n % 2 == 0) {
		 cout << n << " " << n * 2 << endl;
	 }
	 for (int i = 0; i < N; i++) {
		 if (n % prime[i] != 0) {
			 cout << prime[i] * n << " " << (prime[i] - 1) * n << endl;
			 return;
		 }
	 }
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		solve();
	}
}
