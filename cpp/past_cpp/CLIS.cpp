#include<bits/stdc++.h>
using namespace std;

int clis(int a2[], int first, int last, int n)
{
    int d=INT_MIN,i,j;
    int lis[last-first];
    for(int i=first;i<last;i++)
        lis[i]=1;
    for(int i=first+1;i<last;i++)
        for(int j=first;j<i;j++)
            if(a2[i] > a2[j] && lis[i] < lis[j] + 1)
                lis[i] = lis[j] + 1;
    for(int i=first;i<last;i++)
        d=max(d,lis[i]);
    return d;
}

int main()
{
    int n,i,d=INT_MIN;
    cin >> n;
    int a[n];
    int a2[2*n];
    for(i=0;i<n;i++)
        cin >> a[i];
    for(i=0;i<n;i++)
        a2[i] = a[i];
    for(i=n;i<2*n;i++)
        a2[i] = a[i-n];
    for(i=0;i<2*n;i++)
        cout << a2[i]<<" ";
    cout << d <<" \n";
    for(i=0;i<n;i++)
        d=max(clis(a2,i,i+n,n),d);
    cout << d;
}

/*
8
3 4 -2 0 9 1 2 3
*/
