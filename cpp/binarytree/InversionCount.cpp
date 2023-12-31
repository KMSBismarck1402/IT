#include<bits/stdc++.h>
using namespace std;
 
int getSum(int BITree[], int index)
{
    int sum = 0; 
    while (index > 0)
    {
        sum += BITree[index];
        index -= index & (-index);
    }
    return sum;
}
 
void updateBIT(int BITree[], int n, int index, int val)
{
    while (index <= n)
    {
       BITree[index] += val;
       index += index & (-index);
    }
}
 
void convert(int arr[], int n)
{
    int temp[n];
    for (int i=0; i<n; i++)
        temp[i] = arr[i];
    sort(temp, temp+n);
    for (int i=0; i<n; i++)
    {
        arr[i] = lower_bound(temp, temp+n, arr[i]) - temp + 1;
    }
}
 
int getInvCount(int arr[], int n)
{
    int invcount = 0;
    convert(arr, n);
    int BIT[n+1];
    for (int i=1; i<=n; i++)
        BIT[i] = 0;  
    for (int i=n-1; i>=0; i--)
    {
        invcount += getSum(BIT, arr[i]-1);
        updateBIT(BIT, n, arr[i], 1);
    }
    return invcount;
}

int main()
{
    int arr[] = {8, 4, 2, 1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "Number of inversions are : " << getInvCount(arr,n);
    return 0;
}