#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,i,d;
    string s,sz;
    priority_queue<int> pq;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> s;
        if(s[0]=='+')
        {
            sz=s.substr(1,s.size());
            if()
            pq.push(stoi(sz));
        }
        else
        {
            d=pq.top();
            pq.pop();
            while(pq.top()==d)
            {
                pq.pop();
            }
        }
    }
    d=pq.size();
    cout << d <<"\n";
    for(i=0;i<d;i++)
    {
        cout<<pq.top()<<"\n";
        pq.pop();
    }
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
