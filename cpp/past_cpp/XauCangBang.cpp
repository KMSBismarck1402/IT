#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int l,i,d=0,x=0,y=0;
    string s; string a="a"; string b = "b";
    cin >> l;
    cin.ignore();
    getline(cin,s);
    if(l==1)
    {
        cout << 1 << "\n";
        return;
    }
    else
    {
        for(i=0;i<l-1;i++)
        {
            if(strcmp(s,a)==0)
                cout << "123 ";
        }
    }

}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        solve();
}
