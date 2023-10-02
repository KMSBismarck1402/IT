#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("bracket.inp","r",stdin);
    freopen("bracket.out","w",stdout);
    stack<int> st;
    string s;
    cin>>s;
    for (int i=0;i<s.length();i++)
    {
        if (s[i]=='(') st.push(i);
        if (s[i]==')')
        {
            cout<<st.top()+1<<" "<<i+1<<"\n";
            st.pop();
        }
    }
}
