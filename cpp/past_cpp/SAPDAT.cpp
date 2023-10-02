#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;
typedef long long s64;

const int mxN = 1e5;
s64 a[mxN + 1];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    sort(a + 1, a + n + 1, [](s64 a, s64 b) { return a > b; });
    int pos = ceil((float)(n + 1) / 2);
    for (int i = n - pos + 2; i <= n; i++) {
        cout << a[i] << " ";
    }
    for (int i = 1; n % 2 == 0 ? i < pos : i <= pos; i++) {
        cout << a[i] << " ";
    }
}

//21 17 14 11 10 8 45 45 36 34 28 27

//45 45 36 34 28 27 21 17 14 11 10 8
