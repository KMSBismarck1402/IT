#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int x,y,i;
    cin >> x >>  y;
    if(__gcd(x,y)!=1)
    {
        cout << 0;
    }
    else
    {
        if((x%2==0) || (y%2==0))
            cout << 1;
        else
        {
                if( (__gcd(x+1,y)!=1) || (__gcd(x-1,y)!=1)|| (__gcd(x,y+1)!=1) || (__gcd(x,y-1)!=1) )
                    cout << 1;
                else
                    cout << 2;
        }
    }
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

/*
4
5 8
3 9
5 19
7 11
*/
