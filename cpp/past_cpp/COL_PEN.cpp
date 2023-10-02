#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("COL_PEN.inp","r",stdin);
    freopen("COL_PEN.out","w",stdout);
    int s=0,i;
    int a[4];
    for(i=1;i<=4;i++)
    {
        cin >> a[i];
        if (i==2)
        {
            if (a[2] == a[1])
            {
                s+=1;
            }
        }
        if (i==3)
        {
            if ((a[3] == a[2]) || (a[3] == a[1]))
            {
                s+=1;
            }
        }
        if (i==4)
        {
            if ((a[4] == a[3]) || (a[4] == a[2]) || (a[4] == a[1]))
            {
                s+=1;
            }

        }
    }
    cout << s;
}
