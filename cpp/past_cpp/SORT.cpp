#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a , b ,c ,i, y ,z,d,e;
    cin >>a >> b ;
    c =a+b;
    d=1;
    int m[a];int n[b];int o[c];
    for (i=0 ; i<a;i++)
    {
        cin >> m[i];
    }
    for (i=0;i<b;i++)
    {
        cin >> n[i];
    }
    for (i  = 0 ; i< a ; i++)
    {
        while (n[d] <=m[i])
        {
            o[d] = n[d];
            d = d+1;

        }
    }
    for (i=1 ; i<=c;i++)
    {
        cout <<  o[i]<< " ";
    }
}
