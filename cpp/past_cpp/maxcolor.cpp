#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int a[3],s=0,i,j;
    cin >> a[0] >> a[1] >> a[2];
    for(i=0;i<3;i++)
        if(a[i]!=0)
        {
            a[i]--;
            s++;
        }
    for(i=0;i<3;++i)
    for(j=i+1;j<3;j++)
    if(a[i]>a[j])
        swap(a[i],a[j]);
    sort(a,a+3);
    if(a[0]>=2)
    {
        cout << s+3 <<"\n";
        return;
    }
    if(a[0]==1)
    {
        if(a[2]>=2)
            cout << s+2;
        else
            cout << s+1;
        cout << "\n";
        return;
    }
    if(a[1]==0)
        cout << s;
    else
        cout << s+1;
    cout << "\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

/*
4
1 0 1
3 3 0
1 1 1
0 0 0
*/
