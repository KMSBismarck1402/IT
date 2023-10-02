#include <bits/stdc++.h>
using namespace std;

bool thck(string s , string ck)
{
    int l = s.length(); int lck = ck.length();
    for (int i = lck; i < l ; i+=lck)
    {
        if (s.substr(0+i,lck+i) != ck)
            return false;
        else
            return true;
    }
}

void check(string a)
{
    int s = a.length();
    for (int i = 0 ; i< s/2;i++)
    {
        string ck = a.substr(0,i);
        int l = ck.length();
        if (s%l == 0)
            if (thck(a , a.substr(0,i) ) )
                cout << "yes";
            else
                cout << "no";
    }
}

int main()
{
    int i;
    string a;
    cin >> a;
    check(a);
}
