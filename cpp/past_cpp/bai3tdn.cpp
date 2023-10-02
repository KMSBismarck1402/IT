#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int tnum(int a)
{
    int s,i;
    s=0;
    for (i = 1; i<= a ; i++)
    {
        if ((a % i) == 0)
        {
            s +=1;
        }
    }
    if(s ==3)
    {
        cout << "YES"<<endl;
    }
    if (s != 3)
    {
        cout << "NO "<<endl;
    }
}
int main()
{
    int n,i;
    cin >> n;
    int a[n];
    for (i=0 ; i< n ; i++)
    {
        cin >> a[i];
    }
    for (i = 0; i<n ; i++)
    {
        tnum(a[i]);
    }
}
