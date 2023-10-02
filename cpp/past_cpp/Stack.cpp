#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    stack <int> s;
    int t,d,i;
    cin >> t;
    while(t )
    {
        cin >> d;
        if(d==1)
        {
            cin >> i;
            s.push(i);
        }
        if(d==2)
        {
            if(s.empty() )
                cout << -1 << "\n";
            else
                cout << s.top() <<"\n";
        }
        if(d==3)
        {
            if(s.empty() == 0)
                s.pop();
        }
        t--;
    }
    return 0;
}

