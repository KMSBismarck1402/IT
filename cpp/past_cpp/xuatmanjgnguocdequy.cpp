#include <bits/stdc++.h>
using namespace std;
void xm(int a[],int n)

{

    if (n  > 0)
    {
        cout << " "<<a[n-1];
        xm(a ,n-1);
    }
}

#define dim(x) (sizeof(x)/sizeof(x[0]))

int main()
{
    int a[] = {1,3,5,7,9,21,412,5};
    xm(a,dim(a));
}
