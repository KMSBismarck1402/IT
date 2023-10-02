#include <bits/stdc++.h>
using namespace std;

int sosanh(int a, int b)
{
    return abs(b-a);
}

int main()
{
    int n,i,y=0,m=0;
    cin >>n;
    int a[n]; int b[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    qsort(a,n,sizeof(a[0]),sosanh);
    for(i=0;i<n;i++)
    {
        cout << a[i];
    }
    for (i=1;i<n;i++)
    {
        if (a[i] == a[i-1];
        {
            b[y] +=1;
        }
        if (a[i] != a[i-1])
        {
            if (b[y] > m)
            {
                m = b[y];
            }
            y++;
        }
    }
}
