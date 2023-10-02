#include <bits/stdc++.h>
using namespace std;

priority_queue <int,vector<int>,greater<int> > sm;
priority_queue <int,vector<int>,greater<int> > bi;
long long n,smr,smt,bir,bit;
int sum = 0;

void Solve()
{
    int s=0;
    while(s<n&&s+sm.top()<=n)
    {
        s+=sm.top();
        sm.pop();
        sum+=1;
    }
    while(sm.size()>0)
    {
        bi.push(sm.top());
        sm.pop();
    }
    s = 0;
    while(s<n&&s+bi.top()<=n)
    {
        s+=bi.top();
        bi.pop();
        sum+=1;
    }
    cout << sum;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    freopen("DELIVERY.INP","r",stdin);
    freopen("DELIVERY.OUT","w",stdout);
    cin >> n >> smr;
    for(int i=1;i<=smr;i++)
    {
        cin >> smt;
        sm.push(smt);
    }
    cin >> bir;
    for(int i=1;i<=bir;i++)
    {
        cin >> bit;
        bi.push(bit);
    }
    Solve();
}

/*
10
8
2
2
2
2
2
4
4
4
4
3
3
6
6
*/
