#include <bits/stdc++.h>
using namespace std;

int  main()
{
    freopen("maxpath.inp","r",stdin);
    freopen("maxpath.out","w",stdout);
    unsigned long long n;
    cin >> n;
    unsigned long long a[n][n];
    for(unsigned long long i=0;i<n;i++)
        for(unsigned long long j=0;j<n;j++)
            cin >> a[i][j];
    for(unsigned long long i=1;i<n;i++)
    {
        unsigned long long z=a[i][0];
        unsigned long long w=a[0][i];
        a[i][0]=z+a[i-1][0];
        a[0][i]=w+a[0][i-1];
    }
    for(unsigned long long j=1;j<n;j++)
        for(unsigned long long k=1;k<n;k++)
            a[j][k]=max(a[j][k]+a[j-1][k],a[j][k]+a[j][k-1]);
    cout << a[n-1][n-1];
}
/*
#include <iostream>
using namespace std;
int main()
{
    int n;
    freopen("maxpath.inp","r",stdin);
    cin >> n;
    unsigned long long a[n][n];
    int i,j;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            cin >> a[i][j];
    i=j=0;
    for(int j=1;j<n;j++){
        a[0][j]+=a[0][j-1];
        a[j][0]+=a[j-1][0];
    }
    i=j=1;
9    while(i<n){
        while(j<n){
            if(a[i-1][j]>a[i][j-1])
                a[i][j]+=a[i-1][j];
            else a[i][j]+=a[i][j-1];
            j++;
        }
        i++;
        j=1;
    }
    cout << a[n-1][n-1];
}*/
