#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("xoayvong.cpp","r",stdin);
    freopen("xoayvong.cpp","w",stdout);
    string a,e;
    int i,b,c,d;
    cout << "nhap so phan tu cua mang ";
    cin >> b;
    cout << "nhap so lan xoay vong ";
    cin >> c;
    cout << "nhap cac phan tu trong mang ";
    for ( i = 1; i <=b ; i++)
    {
        cin >>d;
         a[i]= d;
    }
    a = e;
    for (i = 2 ; i <=  b ; i++)
    {
        a[i] = a[i-1];
    }
    for ( i = 1; i <=b ; i++)
    {
        cout << "so phan tu thu "<<i<< " la "<<a[i];
    }
}
