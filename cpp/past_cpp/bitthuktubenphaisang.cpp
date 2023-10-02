#include <bits/stdc++.h>
using namespace std;

int chuyenhe2(int a, int k)
{
    int i;int c = 0;int r = a;
    char ar[11]; int n=2;
    while (r > 0)
    {
        ar[c] = (char) ((r % 2) + 48); // cach lam dua tren ma ascii , mã 48 là 0 , 49 là 1 , r% 2 = 0 thì ar[c] là 0 , ngược lại là 1.
        c++;
        r /=2;
    }
    k-=1;
    ar[k] = 48;
    for (i = c - 1; i >= 0; i--)
    {
        cout << ar[i];
    }
    return 1;
}

int main()
{
    int n,k;
    cin >> n>>k;
    chuyenhe2(n,k);
}
