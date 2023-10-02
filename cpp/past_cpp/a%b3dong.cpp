#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a,b,c,i,d,e,f;
    cin >> a;
    string s;
    getline(cin,s);
    b= strlen(s);
    for(i=1;i <= b ;i++)
    {
        c=('s[i]' - '0' *10 + 's[i+1]' - '0' )%a;
        e = c;
        f = e - a;
        d = d+c;
    }
    cout << d;
}
