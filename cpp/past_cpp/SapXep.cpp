#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i;
    cin >> n;
    int *a = new int [n];
    for(i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n);
    for(i=0;i<n;i++)
        cout << a[i] << " ";
    delete[] a;
}
