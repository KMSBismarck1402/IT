#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    list <int> l;
    int t,d,i;
    cin >> t;
    while(t )
    {
        cin >> d;
        if(d==1)
        {
            cin >> i;
            l.push_back(i);
        }
        if(d==2)
        {
            if(l.empty() )
                cout << -1 << "\n";
            else
            {
                cout << l.front() <<"\n";
                l.pop_front();
            }
        }
        if(d==3)
        {
            l.sort();
        }
        t--;
    }
    return 0;
}

