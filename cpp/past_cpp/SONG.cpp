#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("SONG.inp","r",stdin);
    freopen("SONG.out","w",stdout);
    int a[8],i,b=0,c=0;
    for(i=1; i<=8; i++)
    {
        cin >> a[i];
        if (a[i] == i)
        {
            b+=1;
        }
        if(a[i] == (8-i+1))
        {
            c+=1;
        }
    }
    if(b==8)
    {
        cout << "ASCENDING";
    }
    if(c==8)
    {
        cout << "DESCENDING";
    }
    else if((b!=8) && (c!=8))
    {
        cout << "MIXED";
    }

}
