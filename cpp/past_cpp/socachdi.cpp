#include<bits/stdc++.h>
using namespace std;

int th(int k, int n) {
    if (k == 0 || k == n) return 1;
    if (k == 1) return n;
    return th(k - 1, n - 1) + th(k, n - 1);
}
int main(){
    int n,m,s1,s2,x,y,g,h,s3,p,q;
    cin >> m >> n >> x >> y;
    s1 = m+n;
    s2 = x+y;
    int a[20];int b[20];
    for (int i = 0; i <= s1; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            a[j] = th(j, i);
        }
    }
    for (int i = 0; i <= s2; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            b[j] = th(j, i);
        }
    }
    g = a[n] - b[y];
    cout << g;
}
