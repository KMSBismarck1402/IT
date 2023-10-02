#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b;
    cin >> a >> b;
    cout << min(min(a,b),(a+b)/4)<<"\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

/*
6
5 5
10 1
2 3
0 0
7 2
1000000000 1000000000
*/
