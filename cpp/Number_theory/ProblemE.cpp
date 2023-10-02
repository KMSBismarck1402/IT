#include <bits/stdc++.h>    
using namespace std ;
typedef unsigned long long ull;

int db(ull n)
{
    ull d=0;
    while(n)
    {
        d+= n&1;
        n>>=1;
    }
    return d;
}

 
int main()
{
    int t;
    ull n,codd;
    cin >> t;
    while(t--)
    {
        cin >> n;
        codd = db(n);
        codd = pow(2,codd);
        cout << n+1-codd <<" "<< codd <<"\n";
    }
}