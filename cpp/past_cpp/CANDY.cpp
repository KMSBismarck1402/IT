#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("CANDY.INP","r",stdin);
    freopen("CANDY.OUT","w",stdout);
    int n,s = 2000000000;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(abs(a[i] - a[j]) < s)
               {
                   s = abs(a[i] - a[j]);
               }
        }
    }
    cout << s;
}
