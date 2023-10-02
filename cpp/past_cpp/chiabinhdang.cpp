#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,a,s=0,b;
    cin >> n;
    a=n*n;
    for (i=1;i<=a;i++)
    {
        s+=i;
    }
    b=s/n;
    cout << s<<" "<<b;
    a=n*n;
}
