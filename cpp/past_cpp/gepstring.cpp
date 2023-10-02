#include <iostream>
#include <string>
using namespace std;

int main ()
{
    long r = 1;
    long p;
    string s;
    cout << "nhap vao 1 so nguyen ";
    cin >> p ;
    cout << "nhap vao 1 day randum nao do ";
    getline (cin , s);
    r = 0;
    for ( int i = 0 ; s.length() ;i++)
    {
        r = ( (r*10 + s[i] - '0') % p) ;
    }
    if (r = 0)
        cout << "chia het";
    else
        cout << r ;
}
