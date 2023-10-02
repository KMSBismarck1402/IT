#include <iostream>
using namespace std;

void manga(int a[],int na)
{
        for (int i = 0 ; i < na ; i++)
    {
        cout << " nhap phan tu a[" << i << "] ";
        cin >> a[i];
    }

}

void mangbb(int b[],int nb)
{
    for (int i = 0; i < nb ; i++)
    {
        cout << "nhap phan ti b[" << i << "]";
        cin >> b[i];
    }
}

void noimang(int a[],int na , int b[], int nb, int i [])
{
    for (i = 0 ; i < na ; i++)
    {
        c[i] = a[i];
        cout << a[i] << " ";
    }
    for ( i = 0 ; i < nb ; i ++)
    {
        c[na + 1] = b[i];
        c[i] = b[i - na];
        cout << b[i] << " " ;
    }
    for (i = 0 ; i < na ; i ++)
    {
        c[i] = a[i];
    }
}

int main ()
{
    int a[20],b[20],c[20]
    int i , na , nb;
    cout << "nhap mang a " ;
    cin >> na ;
    manga (a , na);
    cout << "nhap mang b ";
    cin >> nb;
    mangb (b , nb)
    noimang(a, na , b , nb , i)
    return 0;
}
