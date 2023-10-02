#include <bits/stdc++.h>
using namespace std;

int solohong(int a)
{
    static int aTab[] = {1,0,0,0,1,0,1,0,2,1};
    int s = 1;
    while (a/=10)
    {
        s += aTab[a%10];
    }
    return s;
}


int main ()
{
    int a;
    cin >> a;
    cout << solohong(a);
}
