#include <bits/stdc++.h>
using namespace std;

bool solve(int n, int c, string s)
{
    int i=0,j,iF =0, iL = n,cnt = 0;
    while(iF < n && s[iF] == '0') iF++;
    i = iF;
    while(iL > iF && s[iL-1] == '0') iL--;
    while(i < iL)
    {
        while(i < iL && s[i] == '1') i++;
        j = i;
        while(j < iL && s[j] == '0') j++;
        if(j-i > c) cnt++;
        if(cnt >= 2) return false;
        i = j;
    }
    return true;

}

int main()
{
    int t,n,c;
    string s;
    cin >> t;
    while(t--)
    {
        cin >> n >> c;
        cin.ignore();
        getline(cin,s);
        solve(n,c,s);
    }
}
