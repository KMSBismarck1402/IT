#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,x;
    bool b[10005];
    deque<int> dq;
    cin>>n>>k;
    int d=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        if(d<k)
        {
            if(b[x]!=true)
            {
                b[x]=true;
                dq.push_back(x);
                d++;
            }
        }
        else
        {
            if(b[x]!=true)
            {
                b[dq.front()]=false;
                b[x]=true;
                dq.pop_front();
                dq.push_back(x);
            }
        }
    }
    while (!dq.empty())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }
}
