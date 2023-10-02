#include <bits/stdc++.h>
using namespace std;

int CachLy(int n, string s)
{
    int tg, ans=0;
    for(int i=0;i<n;i++)
    {
        tg=0;
        if(s[i]=='0')
        {
            while((s[i]=='0')&&(i<n))
            {
                i++;
                tg++;
            }
            ans+=(tg-1)/2;
        }
    }
    return ans;
}

int main()
{
    int t, n; string s;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        cin >> n >> s;
        cout << CachLy(n, s) << "\n";
    }
}
