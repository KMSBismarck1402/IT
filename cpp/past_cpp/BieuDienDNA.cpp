#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int d,i,m=0,n;
    cin >> s;
    n=s.size();
    char *cs = new char[n+1];
    strcpy(cs,s.c_str());
    n--;
    for(i=0;i<n;i++)
    {
        if(cs[i]==cs[i+1])
            d++;
        else
            d=0;
        if(d>m)
            m=d;
    }
    m++;
    cout << m;
    delete []cs;
}
