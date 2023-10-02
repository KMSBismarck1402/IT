#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i;
    unsigned long long a;
    cin >> n;
    a = 1;
    for (i = 5 ; i <= n ; i+=5)
    {
        a = a*i;
        cout << a<<" ";
    }
    cout << a;

}
