#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
    stack<char> b;
    queue<char> a;
    for (int i=0; i<s.size();i++)
    {
        if (s[i] ==')')
        {
            cout<<b.top();
            b.pop();
        }
        else
        if(s[i] >='a' && s[i] <='z')
        {
            cout<<s[i];
        }
        else if(s[i]!='(')
                    b.push(s[i]);
    }
    cout<<'\n';
}


int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n;i++)
    {
        string s;
        cin>>s;
        solve(s);
    }
    return 0;
}
