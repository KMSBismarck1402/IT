#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

inline ll solve()
{
    string s;
    getline(cin,s);
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >>
    }
    ll a,b;
    stringstream ss (s);
    stack <ll> st;
    string w;
    while(!ss.eof())
    {
        ss >> w;
        if(isdigit(w[0]) )
            st.push(stoll(w));
        else
        {
            b = st.top();
            st.pop();
            a = st.top();
            st.pop();
            if(w == "*")
                st.push(a*b);
            else if(w=="/")
                st.push(a/b);
            else if(w=="+")
                st.push(a+b);
            else if(w=="-")
                st.push(a-b);
        }
    }
    cout << st.top() << "\n";
}

int main()
{
    int t;
    string s;
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    cin >> t;
    cin.ignore();
    while(t--)
        solve();
    return 0;
}
