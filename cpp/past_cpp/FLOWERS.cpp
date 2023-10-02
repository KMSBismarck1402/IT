#include <bits/stdc++.h>
using namespace std;

int sosanh(const void *pa, const void *pb)
{
    string a = *(const string *)pa, b = *(const string *)pb;
    if ((a+b) < (b+a))
        return -1;
    else if ((a+b) > (b+a))
        return 1;
    else return 0;
}

void nhapmang(string a[],int n)
{
    for(int i=0;i<n;i++)
        cin >> a[i];
}

void xuatmang(string a[],int n)
{
    for(int i=0;i<n;i++)
        cout << a[i];
}

int main()
{
    int n,m,i,s;
    cin >> n >> m >> s;
    cin.ignore();
    string a[n];
    string b[m];
    nhapmang(a,n);
    nhapmang(b,m);
    qsort(a,n,sizeof(a[0]),sosanh);
    qsort(b,m,sizeof(b[0]),sosanh);
    string c;

}
