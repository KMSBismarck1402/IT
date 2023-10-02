#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t, n, n1, s1, s2, j; string s;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        s1=0, s2=0;
        cin >> n >> s;
        n1=2*n;
        for(j=0;j<n1;j+=2)
        {
            s1+=s[j]-'0';
            s2+=s[j+1]-'0';
            if((n1-1-j)/2<abs(s1-s2))
            {
                j+=2;
                break;
            }
        }
        cout << j << "\n";// << s1 << " " << s2;
    }
}
