#include <bits/stdc++.h>
using namespace std;
bool kt[26];

bool check(string s)
{
    int n,i,d;
    kt[s[0]-'A'-1]=true;
    n=s.length()-1;
    for(i=1;i<n;i++)
    {
        while(s[i-1]== s[i])
            i++;
        if(kt[s[i]-'A'-1]== 0)
            kt[s[i]-'A'-1]++;
        else
            return false;
    }
    return true;
}

int main()
{
    ios_base::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int n,t;
    string s;
    cin >> t;
    while(t--)
    {
        memset(kt,0,sizeof(kt));
        cin >> n;
        cin >> s;
        if(check(s) )
            cout << "YES";
        else
            cout << "NO";
        cout << "\n";
    }
}
