#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

void snt(ull n)
{
    ull cnt=0;
    while(n%2==0)
    {
        cnt++;
        n=n>>1;
    }
    if(cnt>0)
        cout<<"2^"<<cnt<<" ";
    for(ull i=3;i*i<=n;i+=2)
    {
        cnt=0;
        while(n%i==0)
        {
            cnt++;
            n=n/i;
        }
        if(cnt>0)
            cout<<i<<"^"<<cnt<<" ";
    }
    if(n>2)
        cout<<n<<"^"<<1;
    cout<<'\n';
}

int main()
{
    ull n;
    cin >> n;
    while(n!=0)
    {
        snt(n);
        cin >> n;
    }
}