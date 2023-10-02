#include <bits/stdc++.h>
using namespace std;

int main()
{
    unsigned long long a =0,n,k,i;
    cin >> n >>k;
    for (i = 1 ; i <= (n-k+1) ; i++)
    {
        a+=i*(n-k-i+2);
    }
    cout << a;
}
