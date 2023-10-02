#include <iostream>
using namespace std;

int main ()
{
    int a,b;
    cout << "nhap vao 1 so nguyen random nao do ";
    cin >> a;
    b = sqrt(a) %1;
    if( b ==  0)
    {cout << "yes ";}
    else {cout << "no ";}
}
