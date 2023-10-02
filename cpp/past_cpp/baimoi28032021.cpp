#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string a[] = {"zero","one","two","three","four","five","six","seven","eight","nine","ten"} ;
    if (n >10) cout << "greater than tengz.net";
    if (n <= 10 && n >=0)cout << a[n];
    if (n < 0) cout << " you are gay";
}
