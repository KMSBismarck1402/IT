#include <iostream>
using namespace std;

int main()
{
    int i , n ;
    int a(20);
    cout << "nhap so phan tu " ;
    cin >> n;
    for (i=0 ; i < n ; i++)
    {
        cout <<"nhap phan tu " << i << " : " ;
        cin >> a[i] ;
    }
    for (i = 0 ; i < n ; i ++)
    {
        cout <<  a[i] << " ";
        return 0;
    }
}

