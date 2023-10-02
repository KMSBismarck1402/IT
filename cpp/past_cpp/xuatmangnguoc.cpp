#include <bits/stdc++.h>
using namespace std;

#define dim(x) (sizeof(x)/sizeof(x[0]))
int main ()
{
    int a[] = {1,5,2,6,2,5,1,2,9};
    for (int i = (dim(a)-1) ; i > -1; i--)
    {
        cout << a[i] << " ";
    }
}
