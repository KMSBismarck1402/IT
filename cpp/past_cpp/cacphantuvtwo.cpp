#include <iostream>
using namespace std;

void nhapz(long a[], long n)
{
        for (long i = 0 ; i < n ; i ++)
    {
        cout << "nhap phan tu a[" << i << "] = ";
        cin >> a[i];
    }
}

void xuatz(long a[], long n)
{
    for (long i = 0 ; i < n ; i++)
    {
        cout << a[i] << " ";
    }
}

void nhapo(long b[], long m)
{
        for (long p = 0 ; p < m ; p ++)
    {
        cout << "nhap phan tu a[" << p << "] = ";
        cin >> b[p];
    }
}

void xuato(long b[], long m)
{
    for (long p = 0 ; p < m ; p++)
    {
        cout << b[p] << " ";
    }
}


int main()
{
    long a[1000];
    long b[1000];
    long n;
    long m;
    cout << "nhap n ";
    cin >> n;
    nhapz(a,n);
    cout << "nhap m ";
    cin >> m;
    nhapo(b,m);
    xuatz(a,n);
    xuato(b,m);
    return 0;
}
