#include <bits/stdc++.h>
using namespace std;
const int maxn = 110;
 
int prime[] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53};
int n, a[maxn], b[maxn], f[maxn][1<<16], pre[maxn][1<<16], sel[maxn][1<<16];
 
int num_arr[60];
 
void init() {
    for (int i = 2; i < 60; i++)
        for (int j = 0; j < 16; j++)
            if (i % prime[j] == 0)
                num_arr[i] |= (1<<j);
}
 
int get_num(int a) {
    return num_arr[a];
}
 
int main() {
    init();
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    memset(f, -1, sizeof(f));
    f[0][0] = 0;
    for (int i = 1; i <= n; i++) {
        for (int s = 0; s < (1<<16); s++) {
            if (f[i-1][s] != -1) {
                f[i][s] = f[i-1][s] + abs(a[i] - 1);
                pre[i][s] = s;
                sel[i][s] = 1;
            }
            for (int j = 2; j < 60; j++) {
                int num = get_num(j);
                if ((s & num) == num) {
                    int ss = s ^ num;
                    if (f[i-1][ss] == -1) continue;
                    int tmp = f[i-1][ss] + abs(a[i] - j);
                    if (f[i][s] == -1 || tmp < f[i][s]) {
                        f[i][s] = tmp;
                        pre[i][s] = ss;
                        sel[i][s] = j;
                    }
                }
            }
        }
    }
    int p = 0, ans = (1<<29);
    for (int s = 0; s < (1<<16); s++) {
        if (f[n][s] != -1 && f[n][s] < ans) {
            ans = f[n][s];
            p = s;
        }
    }
    for (int i = n; i >= 1; i--) {
        b[i] = sel[i][p];
        p = pre[i][p];
    }
    for (int i = 1; i <= n; i++) cout << b[i] << " ";
    return 0;
}