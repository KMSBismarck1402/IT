#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

inline bool isbiton(register ull n, register int k)
{
    return (n & (1<<k)) != 0;
}

inline int longestbiton(register ull n)
{
    register int i,j,l = sizeof(n)*8, nmax = 0;
    i=0;
    while(i<l)
    {
        while(i < l && isbiton(n,i))
            i++;
        j=i;
        while(j < l && isbiton(n,j))
            j++;
        nmax = max(nmax, j-i);
        i=j;
    }
    return nmax;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;
    ull n;
    cin >> t;
    while(t-- )
    {
        cin >> n;
        cout << longestbiton(n)<<"\n";
    }
}
