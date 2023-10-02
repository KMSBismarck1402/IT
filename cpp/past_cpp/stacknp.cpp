#include <bits/stdc++.h>
using namespace std;

void tobinary(int n)
{
    stack<int> s;
    while(n>=1)
    {
        s.push(n%2);
        n/=2;
    }
    while(!s.empty())
    {
        cout << s.top();
        s.pop();
    }
}

int main()
{
    int n;
    cin >> n;
    tobinary(n);
}
