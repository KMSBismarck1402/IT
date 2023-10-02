#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,d;
    cin >> n;
    set<int> st;
    set<int>::iterator it;
    for(i=0;i<n;i++)
    {
        cin >> d;
        st.insert(d);
    }

    for(it=st.begin();it!=st.end();it++)
        cout << *it << " ";
    cout << "\n";
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        solve();
}
