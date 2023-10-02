#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t, a[3], d, e;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<3;j++)
            cin >> a[j];
        cin >> d >> e;
        if((a[0]+a[1]<=d)&&(a[2]<=e))
            cout << "YES\n";
        else if((a[1]+a[2]<=d)&&(a[0]<=e))
            cout << "YES\n";
        else if((a[0]+a[2]<=d)&&(a[1]<=e))
            cout << "YES\n";
        else cout << "NO\n";
    }
}
