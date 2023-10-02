#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c,t,A,B,C,X,Y,Z,P=0;
    cin >> A >> B >> C >> X >> Y >> Z;
    int p = 0;
    for(a=0;a<=20;a++)
    {
        for(b=0;b<=20;b++)
        {
            for(c=0;c<=20;c++)
            {
                t = a * A + b * B + c * C;
                if(t<=240)
                    P = max(P, a * X + b * Y + c * Z);
            }
        }
    }
    cout << P;
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while(t-- )
        solve();
}
