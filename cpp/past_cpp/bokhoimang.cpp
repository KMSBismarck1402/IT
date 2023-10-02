#include <bits/stdc++.h>
using namespace std;

void arrayerase(int a[], int &n, int i)
{
    memmove(a+i , a+i+1 , (n-i-1)*sizeof(a[0]) );
    n--;
}

void xuatmang(int a[], int n)
{
    for (int i =0 ; i<n ; i++)
        cout << a[i];
}

int main()
{
    int n;
    cin >> n;
    int a[6] ={5,6,3,7,1,9};
    int na =  sizeof(a)/sizeof(a[0]);
    arrayerase(a,n,na);
    xuatmang(a,n);
}
