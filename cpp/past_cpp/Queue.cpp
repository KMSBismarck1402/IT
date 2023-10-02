#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    queue <int> q;
    int t,d,i;
    cin >> t;
    while(t )
    {
        cin >> d;
        if(d==1)
        {
            cin >> i;
            q.push(i);
        }
        if(d==2)
        {
            if(q.empty() )
                cout << -1 << "\n";
            else
                cout << q.front() <<"\n";
        }
        if(d==3)
        {
            if(q.empty() == 0)
                q.pop();
        }
        t--;
    }
    return 0;
}

