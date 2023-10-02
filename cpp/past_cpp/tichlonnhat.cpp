#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,s,d,f;
    cin >> n;
    int *a = new int[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    if (n==1)
    {
        cout << a[0];
        return 0;
    }
    if (n==2)
    {
        cout << a[0] *a[1];
        return 0;
    }
    if(n==3)
    {
        cout << max(a[0]*a[1]*a[2],max(a[0]*a[1],max(a[1]*a[2],a[2]*a[0])));
        return 0;
    }
    sort(a,a+n);
    if(a[n-1] <= 0)
    {
        cout << a[0] * a[1];
        return 0;
    }
    else
    {
        if (a[0] >= 0)
        {
            cout << a[n-1] * a[n-2] * a[n-3];
        }
        if ((a[0] * a[1]) > 0 || a[0] < 0)
        {
            s = a[0] * a[1] * a[n-1];
            if (a[n-3] < 0)
            {
                d = a[n-1] * a[n-2];
                cout << max(s,d);
                return 0;
            }
            if(a[n-3] > 0)
            {
                if(a[n-2] < 0)
                {
                    cout << s;
                    return 0;
                }
                d = a[n-1] * a[n-2] * a[n-3];
                cout << max(s,d);
                return 0;
            }
        }
        if (a[1] >= 0 )
        {
            cout << max(a[n-1]*a[n-2],a[n-1]*a[n-2]*a[n-3]);
        }
    }
}
