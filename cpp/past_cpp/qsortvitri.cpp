#include <bits/stdc++.h>
using namespace std;

void nhapmang(string a[],int n)
{
    for(int i=0;i<n;i++)
        cin >> a[i];
}
void xuatmang(string a[],int n)
{
    for(int i=0;i<n;i++)
        cout << a[i]<<" ";
}

int sosanh(const void *pa, const void *pb)
{
    string a = *(const string *)pa, b = *(const string *)pb;
    if ((a+b) < (b+a))
        return -1;
    else if ((a+b) > (b+a))
        return 1;
    else return 0;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore();
    string a[n];
    nhapmang(a,n);
    qsort(a,n,sizeof(a[0]),sosanh);
    xuatmang(a,n);
}
