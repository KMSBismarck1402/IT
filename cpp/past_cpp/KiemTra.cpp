#include <bits/stdc++.h>
using namespace std;

int binarySearch(int a[], int l, int r, int x)
{
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        if (a[m] == x)
            return m;
        if (a[m] < x)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i,d,x,j,f;
    cin >> n;
    int *a = new int [n];
    for(i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    cin >> j;
    f =n;
    for(i=0;i<j;i++)
    {
        n=f;
        cin >> x;
        int d = binarySearch(a, 0, n - 1,x);
        (d == -1) ? cout << "NO \n"
                   : cout << "YES \n";

    }
    delete[] a;
}
