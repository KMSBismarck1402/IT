#include <bits/stdc++.h>
using namespace std;

int main()
{
    int_fast64_t n,i,t;
    string s;
    cin >> n;
    int a[n];
    for (i = 0 ; i < n ; i++)
    {
        cin >> a[i];
    }
    cin.ignore();
    getline(cin,s);
    for (i = 0 ; i < s.length() ; i++)
    {
        t = t + a[s[i]-'A'];
    }
    cout << t;
}
