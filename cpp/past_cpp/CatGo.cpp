#include <bits/stdc++.h>
#include <queue>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    priority_queue<int64_t,vector<int64_t>,greater<int64_t>> pq;
    int64_t n,s,i,j;
    int64_t d,x,y,z;
    cin >> n;
    cin >> s;
    for(i=0;i<n;i++)
    {
        cin >> j;
        pq.push(j);
    }
    d=0;
    while(pq.size()>1)
    {
        x=pq.top();pq.pop();
        y=pq.top();pq.pop();
        z=x+y;
        pq.push(z);
        d+=z;
    }
    cout << d;
    return 0;
}
