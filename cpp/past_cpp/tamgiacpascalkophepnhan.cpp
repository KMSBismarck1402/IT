#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    int n , i ,j ;
    cout << "nhap so nguyen n ";
    cin >> n ;
    int a[100];
    a[0] = 1;
    for (i = 0 ; i < n ; i++)
    {
        a[i]=1;
        for (j = i - 1 ; j > 0 ; j--);
            a[j] += a[j-1];
        for (j = 0 ; j <= 1 ; j++)
            cout << setw(6) << a[j];
        cout << endl;
    }
    cout << a[n];
}
