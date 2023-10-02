#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int a[] = {6,2,5,5,4,5,6,3,7,6};
    int i,s,l;
    string n;
    s = 0;
    getline(cin,n);
    for (i=1 ; i<= n.length();i++)
    {
        l = n[i] - '0';
        s = s + a[l];
    }
    cout << s;
}
