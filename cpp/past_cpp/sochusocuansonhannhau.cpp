#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,s=0;
    cin >>n;
    int a[i];
    for(i=0;i<n;i++)
    {
        cin >> a[i];;
    }
    for (i=0;i<n;i++)
    {
        s+= (int)log(a[i]);
    }
    cout << s;
}
