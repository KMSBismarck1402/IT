#include <iostream>
using namespace std;

int main ()
{
    int a, b , i;
    cout << "nhap vao 1 so nguyen random nao do ";
    cin >> a;
    b = 0;
    for (i =1 ; i <=a/2;i++)
    {if (a % i == 0)
        {
            b = b + i ;
        }
    }
    if (b == a)
        cout << "yes ";
    else
        cout << "no ";
}
