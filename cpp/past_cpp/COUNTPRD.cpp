#include <bits/stdc++.h>
using namespace std;

int pttsnt(int n){
    int a;
    for(int i = 2; i <= n; i++)
    {
        a = 0;
        while(n % i == 0)
        {
            ++a;
            n /= i;
        }
        if(a)
        {
            cout << i;
            if(a > 1) cout << "^" << a;
            if(n > i)
            {
                cout <<  "*";
            }
        }
    }
    cout << endl;
}

int main()
{
    freopen("COUTPRD.INP","r",stdin);
    freopen("COUTPRD.OUT","w",stdout);
    int n,i;
    cin >> n;
    pttsnt(n);
}
