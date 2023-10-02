#include <bits/stdc++.h>
using namespace std;

template <class T>
void output(const T *pb, const T * pe)
{
    for(const T *p = pb; p < pe; p++)
        cout << *p<<" ";
    cout << "\n";
}

template <class T>
void arr_reverse(const T *pb, const T * pe)
{
    for(const T *p = pe-1; p >= pb; p--)
        cout << *p<<" ";
    cout << "\n";
}

template <class T>
bool ktdx(const T *pb, const T *pe)
{
    for(T *p = pb, *q = pe-1; p<q; p++; q--)
    {
        if(*p != *q)
            return 0;
    }
    return 1;
}

template <class T>
void arr_copy(T *pd, const T *ps, const T * qs)
{
    while(ps < qs)
        *pd++ = * ps++;
}

int main()
{
    int a[] = {6,10,2,4,5,3,15};
    int na=sizeof(a)/sizeof(a[0]);
    output(a,a+na);
    arr_reverse(a,a+na);
    output(a,a+na);
    arr_reverse(a,a+na);
    output(a,a+na);
}
