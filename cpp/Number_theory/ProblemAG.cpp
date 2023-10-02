#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    unsigned  long long b,n,a,ans;
    cin >> n;
    while(n>0)
    {
        cin >> a >> b;
        if(a==0 && b>0)
            ans=0;
        else if(a>0 && b==0)
            ans=1;
        else
        {
            a%=10;
            b%=4;
            if(b==0)
                b=4;
            ans=pow(a,b);
            ans%=10;
        }
        cout << ans << "\n";
        n--;
    }
}
