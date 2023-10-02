#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[1001][1001]={{0}};
    int i,j;
    for(i=0;i<1001;i++)
    {
        for(j=0;j<=i;j++)
        {
            if(j==0)
                a[i][j]=1;
            else
                a[i][j]=(a[i][j-1]+a[i-1][j])%1000000;
        }
    }
    int t;
    cin >> t;
    while(t)
    {
        cout << a[t][t]<<"\n";
        cin >> t;
    }
}