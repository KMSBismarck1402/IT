#include <iostream>
using namespace std;
int Fibonacci(int n)
{
    int a1 = 1, a2 = 1;
    if (n == 1 || n == 2)
        return 1;
    int i = 3, a;
    while (i <= n)
    {
        a = a1 + a2;
        a1 = a2;
        a2 = a;
        i++;
    }
    return a;
}
int main()
{
    int n,i,y;
    cout << "nhap n: ";
    cin >> n;
    int b[n];
    for (i = 0 ; i< n ; i++)
    {
        cin >> b[i];
    }
    int a[10000];
    int a1 = 1, a2 = 1;
    i = 2;
    a[0] = 1; a[1] = 2;
    while (i < 30)
    {
        a[i] = a1 + a2;
        a1 = a2;
        a2 = a[i];
        i++;
    }
    for (i = 0 ; i< n  ; i++ )
    {
        cout << a[i] <<" ";

    }

}
