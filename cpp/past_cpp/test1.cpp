#include <iostream>
using namespace std;

void dscs(int a)
{
    long long n = 1;
    long long s = a/10;
    do
    {
        s = s/10;
        n++;
    }while (s != 0);
    return n;
}
int main ()
{
    long long a ;
    cout << "nhap vao 1 so nguyen ";
    cin >> a;
    cout << "so chu so la " << dscs(a) ;
}
