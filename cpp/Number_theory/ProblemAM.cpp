#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,i,j;
    cin >> t;
    while(t--)
    {
        cin >> n;
        i = n; x = 0;
        while(i--)
        {
            cin >> j;
            x+=(j%2);
        }
        if(x==n||x==0)
            cout<<"YES\n";
        else 
            cout << "NO\n";
    }
}
