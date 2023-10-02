#include <bits/stdc++.h>
using namespace std;

int nm(int a[],int n)
{
    for (int i =1 ; i <= n ; i++)
    {
        cin >> a[i];
    }
}

int xm(int a[],int n)
{
    for (int i = 1 ; i <= n ; i++)
    {
        cout << a[i];
    }
}

int dmdq(int a[],int n , int j)
{
    dmdq(a[n],0,j-1);
}


int dm(int i , int j)
{
    while (i < j)
    {
        i += 1;
        j -= 1;
        dmdq(a[i],i,j);
    }
}


int main()
{
    int a,n;
    cin >>n;
    nm(a,n);
    xm(a,n);
    dm(a,n);
    xm(a,n);
}
