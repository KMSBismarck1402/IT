#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> a;
        cout << ceil(sqrt(a)*2)-2 <<"\n";
    }
}

/*
5
1
5
55
1000
100000000
*/
