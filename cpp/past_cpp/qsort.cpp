#include <bits/stdc++.h>
using namespace std;
// void qsort (void* base, size_t num, size_t size, int (*compar)(const void*,const void*));

void nhapmang(int a[],int n)
{
    for(int i=0;i<n;i++)
        cin >> a[i];
}
void xuatmang(int a[],int n)
{
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
}
/*
int sosanh(const void *pa, const void *pb)
{
    string a = *(const string *)pa, b = *(const string *)pb;
    if ((a+b) < (b+a))
        return -1;
    else if ((a+b) > (b+a))
        return 1;
    else return 0;
} */
int sosanh(const void* a, const void* b)
{
    const int* x = (int*) a;
    const int* y = (int*) b;
    if (*x > *y)
        return 1;
    else if (*x < *y)
        return -1;
    return 0;
}

int main()
{
    int n;
//    freopen("CREATE.INP","r",stdin);
//   freopen("CREATE.OUT","w",stdout);
    cin >> n;
    int *a = new int[n];
    nhapmang(a,n);
    qsort(a,n,sizeof(a[0]),sosanh);
    xuatmang(a,n);
}
