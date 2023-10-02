#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,r;
    cin >> n;
    int *a = new int [n];
    int *b = new int [n];
    int *c = new int [n];
    int *d = new int [n];
    for(i=0;i<n;i++)
        cin >> a[i] >> b[i] >> c[i];
    for(i=0;i<n;i++)
    {
        r = max(a[i],b[i])-min(a[i],b[i]);
        if (r<min(a[i],b[i]))
            d[i] = -1;
        else
        {
            if(c[i]>r*2)
                d[i] = -1;
            else
            {
                if(c[i]>r)
                    d[i] = c[i] - r;
                else
                    d[i] = c[i] + r;
            }
        }
    }
    for(i=0;i<n;i++)
        cout << d[i]<<endl;
}

/*
7
6 2 4
2 3 1
2 4 10
5 3 4
1 3 2
2 5 4
4 3 2
*/
