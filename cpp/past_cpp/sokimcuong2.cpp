#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,k,i;
    cin >> n;
    int a[n],b[n];
    for (i=2 ; i<n ; i++)
    {
        a[i-2] = i;
        a[i-1] = i-1;
    }

}
