#include<bits/stdc++.h>
using namespace std;

int tgpc(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return tgpc(k - 1, n - 1) + tgpc(k, n - 1);
}
int main(){
    int n,m,s;
    cin >> m >> n;
    s = m+n;
    int a[20];
    for (int i = 0; i <= s; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            a[j] = tgpc(j, i);
        }
    }
    cout << a[n];
}
