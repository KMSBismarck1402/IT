#include <bits/stdc++.h>
using namespace std;

bool ktnt(int n)
{
    int a = 2;
    while ( (n % a != 0) && (a <= n/a))
        a++;
    return a > n/a;
}

int main()
{
    int n,i;
    cin >> n;
    int a[n];
    for (i= 0 ; i<n ; i++)
    {
        cin >> a[i];
    }
    for (i=0;i<n;i++)
    {
        if(a[i] ==1 || a[i] ==0|| ktnt(a[i]) ==0)
        {
            cout << "0"<<endl;
        }
        else if ( ktnt(a[i]))
        {
            cout << "1"<<endl;
        }

    }
}
