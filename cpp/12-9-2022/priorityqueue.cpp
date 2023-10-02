#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("priorityqueue.inp","r",stdin);
    freopen("priorityqueue.out","w",stdout);
    priority_queue<int> pq;
    int x;
    string s;
    while (!cin.eof())
    {
        cin>>s;
        if (s[0]=='+')
        {
            s.erase(0,1);
            x=stoi(s);
            pq.push(x);
        }
        if (s[0]=='-')
        {
            int a=pq.top();
            while(pq.top()==a)
                pq.pop();
        }
    }
    int prvi=-1,cnta=0,i=0,a[15005];
    while(!pq.empty())
    {
        if(pq.top()!=prvi)
        {
            a[i]=pq.top();
            prvi=pq.top();
            i++;
            cnta++;
        }
        pq.pop();
    }
    cout<<cnta<<"\n";
    for (i=0;i<cnta;i++) cout<<a[i]<<"\n";
}

/*
13
+1
+3
+2
+3
-
+4
+4
-
+2
+9
+7
+8
-
*/
