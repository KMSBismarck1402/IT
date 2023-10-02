#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,x,y;
    cin >> n;
    deque<int> d;
    cin >> y;
    d.push_front(y);
    for(i=1;i<n;i++)
    {
        cin >> x;
        if(x>d[0])
            d.push_back(x);
        else
            d.push_front(x);
    }
    for(i=0;i<n;i++)
        cout << d[i]<<" ";
    cout <<"\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

/*
2
3
3 2 1
4
4 1 5 3
*/
