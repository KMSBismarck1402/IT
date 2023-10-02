#include <bits/stdc++.h>
using namespace std;

int ktus(int n, int k)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            s++;
    }
    return (s == k);
}

int main()
{
    freopen("QUIZ.INP","r",stdin);
    freopen("QUIZ.OUT","w",stdout);
    int n,k,i,s=0;
    cin >> n >> k;
    for(i=1;i<=n;i++)
    {
        s+= ktus(i,k);
    }
    cout << s;
}




