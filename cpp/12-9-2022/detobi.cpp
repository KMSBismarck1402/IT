#include <bits/stdc++.h>
using namespace std;

void doinhiphan(int n)
{
    stack<int> s;
    while(n>0)
    {
        s.push(n%2);
        n/=2;
    }
    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }
    cout <<"\n";
}

int main()
{
    int n;
    cin >>n;
    for(int i=0;i<n;i++)
    {
        cin >> n;
        doinhiphan(n);
    }
}
