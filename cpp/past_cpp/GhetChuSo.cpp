#include <bits/stdc++.h>

using namespace std;

int T;
string N, D, ans;

void solve (string N, string D)
{
    int vt=N.find(D);
    if (vt==-1) ans="0";
    else
    {
        int len=N.size();
        if (vt==len-1) ans="1";
        else
        {
            int j=vt+1;
            while (j<len-1)
            {
                ans+=char(9- (int)(N[j]-48) +48);
                j++;
            }
            ans+=char(10- (int)(N[j]-48) +48);
        }
    }
    cout <<ans <<"\n";
}

int main()
{
    freopen("GhetChuSo.inp","r",stdin);
    freopen("GhetChuSo.out","w",stdout);
    cin >>T;
    for (int i=1; i<=T; i++)
    {
        N=""; D=""; ans="";
        cin >>N >>D;
        solve(N,D);
    }
    return 0;
}
