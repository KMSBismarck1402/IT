#include <bits/stdc++.h>
using namespace std;

int jpig(int n, int k)
{
    if (n==1)
        return 1;
    else
        return (jpig(n-1,k)+k-1)%n + 1;
}

void solve2(int n, int k)
{
    //n = 9, k = 2, p=7
    int i,p=1,n1;
    n1=n-1;
    vector<int> a;
    for(i=1;i<=n;i++)
        a.push_back(i);
    while(n1--)
    {
        if(p+k<=n)
            p+=k;
        else if(p+k>n)
            p=k-n+p;
        a.erase(a.begin()+p+1);
        if(p=a.size())
            p=1;
        for(i=1;i<=a.size();i++)
            cout << a[i]<<" ";
        cout <<"\n";
    }
    cout << " "<<a[1]<<"\n";
}

void solve()
{
    int n,k,i,d=0;
    cin >> n >> k;
    for(i=2;i<=n;i++)
        d=(d+k)%i;
    cout << d+1 <<" "<< jpig(n,k) <<"\n";
    solve2(n,k);
}

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        solve();
    }
}

/*
2
3 1
10 3
*/
