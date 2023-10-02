#include <iostream>
using namespace std ;

void nhap(int a[], int n)
{
        for (int i = 0 ; i < n ; i ++)
    {
        cout << "nhap phan tu a[" << i << "] = ";
        cin >> a[i];
    }
}

void xuat( int a[], int n)
{
    for (int i = 0 ; i < n ; i++)
    {
        cout << a[i] << " ";
    }
}

void sapxep(int a[],int n)
{
 for(int i=0;i < (n-1);i++)
  for(int j=(i+1) ; j<n ; j++)
   {
    if(a[i]<a[j])
     {
       int temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     }
   }
 cout <<"\n mang sap xep giam la: ";
 xuat(a,n);
}

int main()
{
 int a[50],n;
 nhap(a,n);
 xuat(a,n);
 sapxep(a,n);
 return 0;
}
