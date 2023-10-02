#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,d;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
        cin >> a[i];
    i=0;d=0;
    while(i<n)
    {
        while(i<pow(2,d)&&i<n)
        {
            cout << a[i]<<" ";
            i++;
        }
        cout<< "\n";
        d++;
    }
}
/*
10
1 3 2 4 6 5 7 9 8 0
*/
