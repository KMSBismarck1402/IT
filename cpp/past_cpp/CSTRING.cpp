#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int n,c,i,y;
    cin >> n >> c;
    char s[c],a[c];
    cin >> s[0];
    for (i = 0 ; i< c ; i++)
    {
        a[i] = s[i];
        strcat(a[i],s[i]);
        s[i] = a[i];
    }
    cout << s[i];
}
