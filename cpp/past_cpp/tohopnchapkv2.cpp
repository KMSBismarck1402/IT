#include <bits/stdc++.h>
using namespace std;

void xuatMang(int a[], int n)
{
    for(int i = 0; i < n; i++)
        cout << a[i] << " ";
    cout << "\n";
}

void next(int b[], int n, int k)
{
    int j = k-1;
    if (b[j] < n-1)
        b[j]++;
    else {
        while(b[j] == b[j-1]+1)
            j--;
        b[j-1]++;
        for(; j < k; j++)
            b[j] = b[j-1]+1;
    }
}

int main()
{
    int n,k;
    cin >> n >> k;
    int b[k];
    for (int i = 0; i < k; i++)
        b[i] = i;
    xuatMang(b,k);
    while(b[0] < n-k)
    {
        next(b, n, k);
        xuatMang(b, k);
    }
}



