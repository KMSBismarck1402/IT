#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i,k,j,z,d,e,x,y,o;
    cin >>x >> y ;
    o = x+y;
    j = 0;
    k=0;
    int a[x];int b[y];int c[o];
    for (i=0 ; i< x;i++)
    {
        cout << "a"<<i<<" = ";
        cin >> a[i];
    }
    for (i=0;i<y;i++)
    {
        cout << "b"<<i<<" = ";
        cin >> b[i];
    }
    i=0;
    while (i<x && j<y)
    {
        if (a[i] <= b[j])
            c[k++] = a[k++];
        else
            c[k++]=b[k++];
    }
    for (i=0 ; i < o ;i++)
    {
        cout << "c["<<i<<"] = "<< c[i];
    }
}
