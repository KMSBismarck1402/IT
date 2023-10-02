#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long a , b ,c ,i, n;
    cout << "nhap vao 1 so nguyen ";
    cin >> n;
    b =1;
    a=0;
    c=1;
    for (i = 3; i <= n ; i++)
    {
        a = b+c;
        b = c;
        c = a;
    }
    b = (pow(10,9) + 7);
    a = a%b;
    cout << a;
}
