#include <bits/stdc++.h>
#include <math.h>
using namespace std;

bool ktnt(int n)
{
    int a = 2;
    while ( (n % a != 0) && (a <= n/a))
        a++;
    return a > n/a;
}

int main ()
{
    int n ,i,b;
    cout << "n = ";
    cin >> n;
    int a[n]; static int b[1000000];
    memset(a,0,sizeof(1)*1000000);
    for (i=0 ; i<n ; i++)
    {
        cin >> a[i];
    }
    for (i = 0 ; i < n   ; i++)
    {
        if (ktnt(a[i]) )
        {
            b+=1;
        }
    }
    cout << b;
}
