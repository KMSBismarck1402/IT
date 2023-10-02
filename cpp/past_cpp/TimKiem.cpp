#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,m,x;
    int *p;
    cin >> n >> m;
    int *a = new int[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    while(m--)
    {
        cin >> x;
        p = search(a,a+n,&x,&x+1);
        if(p!=a+n)
            cout << p-a << "\n";
        else
            cout << "-1\n";
    }
}

