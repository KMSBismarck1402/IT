#include <bits/stdc++.h>
using namespace std;

string layten(string s)
{
    int n=s.length()-1;
    string a="";
    while(s[n]!=' '&&n>=0)
    {
        cout <<s[n];
        a+=s[n];
        n--
    }
    return a;
}

string layten2(string s)
{
    int p2 = s.find_last_not_of(' '),p1;
    p1 = s.rfind(' ',p2);
    return s.substr(p1+1,p2-p1);
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL);
    int n,i;
    cin >> n;
    cin.ignore();
    set<string> a;
    string s;
    for(i=0;i<n;i++)
    {
        getline(cin,s);
        a.insert(layten(s));
    }
    cout << a.size();
}
