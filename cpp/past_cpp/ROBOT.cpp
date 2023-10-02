#include <bits/stdc++.h>
using namespace std;

int Landau = INT_MIN;

int gcd(int a, int b)
{

    if (a == 0)

        return b;

    return gcd(b % a, a);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

void findLCM(vector<int>& arr)
{
    int nth_lcm = arr[0];

    for (int i = 1; i < arr.size(); i++)

        nth_lcm = lcm(nth_lcm, arr[i]);
    Landau = max(Landau, nth_lcm);
}

void findWays(vector<int>& arr, int i, int n)
{
    if (n == 0)
        findLCM(arr);
    for (int j = i; j <= n; j++)
    {
        arr.push_back(j);
        findWays(arr, j, n - j);
        arr.pop_back();
    }
}

void Landau_function(int n)
{
    vector<int> arr;
    findWays(arr, 1, n);
    cout << Landau;
}

int main()
{
    int n;
    cin >> n;
    n--;
    if(n==0)
    {
        cout << 1;
        return 0;
    }
    Landau_function(n);
    return 0;
}
