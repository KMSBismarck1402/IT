#include <bits/stdc++.h>
using namespace std;

bool cp(int n)
{
    for(int i=2;i<=n/i;i++)
        if(n%i==0)
            return false;
    return true;
}

int main()
{
    int t,n;
    bool ans;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(n==1)
        {
            cout <<"FastestFinger\n";
            continue;
        }
        if(n&1||n==2)
        {
            cout <<"Ashishgup\n";
            continue;
        }
        if(n%4==0)
        {
            while((n&1)==0)
                n>>=1;
            if(n==1)
                ans = 0;
            else 
                ans = 1;
        }
        else
        {
            n>>=1;
            if(cp(n))
                ans = 0;
            else
                ans = 1;
        }
        if(ans)
            cout << "Ashishgup\n";
        else
            cout <<"FastestFinger\n";
    }
}