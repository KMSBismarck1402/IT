#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,k,d;
    cin >> n>>k;
    priority_queue<int,vector<int>,greater<int>> pq;
    for(i=0;i<n;i++)
    {
        cin >> d;
        pq.push(d);
    }
    for(i=0;i<k-1;i++)
        pq.pop();
    cout << pq.top();
}
