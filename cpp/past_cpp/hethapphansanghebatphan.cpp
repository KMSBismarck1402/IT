#include <iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    cout << "nhap vao 1 so nguyen ";
    cin >> a;
    c=0;
    b = a/8;
    cout << b << " ";
    d = a%8;
    cout << d << " ";
    for (int i = 0; i <= b+1 ; i++)
    {
        c = c + 10;
        cout<< c << " ";
    }
    c=c+d;
    cout <<c;
}
