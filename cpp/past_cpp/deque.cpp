#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int m=0;m<=n-k;m++)
    {
        int s=0;
        for(int j=m;j<k+m;j++)
            if(a[j]>s)
                s=a[j];
        cout << s << " ";
    }
}
