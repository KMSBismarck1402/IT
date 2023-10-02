#include <iostream>
using namespace std;

int main()
{
    int a , x ,b , c ;
    cout <<"nhap so nguyen a: ";
    cin >> a ;
    b = 0;
    cout << "Nhap " << a << " so nguyen\n.";
    for (c = 1 ; c <= a; c++)
    {
        cout << "nhap so nguyen thu "<< c << ": ";
        cin >> x ;
        b =  b + x;
    }
   cout << "tong cac so la: " << b;
}
