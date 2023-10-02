#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout.tie(0);
    int n,i,a;
    unsigned long long s=0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a;
        if(a%2 )
            s+=a;
    }
    if (s% 2)
        cout << "NO";
    else
        cout << "YES";
}
