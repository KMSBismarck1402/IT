#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    while(1) 
    {
        cin >> n >> m;
        if (0 == n && 0 ==m) 
            break;
        if (n > m)
         cout <<"0.000000\n";
        else 
        {
            double ans = (double) (m-n+1) / (m+1);
            cout << fixed << setprecision(6) << ans <<"\n";
        }   
    }      
}