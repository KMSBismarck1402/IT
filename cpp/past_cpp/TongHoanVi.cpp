#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long tab[] = {1,11,111,1111,11111,111111,1111111,11111111,111111111},s;
    int t,n,k,i;
    cin >> t;
    while(t--)
    {
        cin >> n >> k;
        int *a = new int[n];
        for(i=0;i<n;i++)
            cin >> a[i];
        s = accumulate(a,a+n,0);
        for(i=1;i<k;i++)
            s*=(n-i);
        cout << s * tab[k-1]<<"\n";
        delete[]a;
    }
}

/*

*/
