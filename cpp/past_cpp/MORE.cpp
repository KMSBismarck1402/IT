#include <iostream>
#include <algorithm>
using namespace std;
typedef long long s64;

const int mxN = 1e5;
int a[mxN];

int main() {
    int k, n;
    cin >> k >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    s64 cnt = 0, ans = 0, i = 0;
    while (cnt <= k) {
        cnt += a[i];
        i++;
        if (cnt <= k) {
            ans++;
        }
    }
    cout << ans;
}
