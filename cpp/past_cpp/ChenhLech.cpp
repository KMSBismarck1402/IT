#include <bits/stdc++.h>
using namespace std;

int sosanh(int a,int b)
{
    return a>b;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int64_t n,i,s;
    int64_t d=0;
    cin >> n;
    s=n-1;
    int *a = new int [n];
    for(i=0;i<n;i++)
        cin >> a[i];
    sort(a,a+n,sosanh);
    for(i=0;i<n;i++,s-=2)
    {
        d= d + (a[i]*s);
    }
    cout << d;
    delete[] a;
}
