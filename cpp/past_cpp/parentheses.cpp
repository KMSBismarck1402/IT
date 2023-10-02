#include <bits/stdc++.h>
using namespace std;

bool areBracketsBalanced(string a)
{
    stack<char> s;
    char x;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == '(')
        {
            s.push(a[i]);
            continue;
        }
        if (s.empty())
            return false;

        switch (a[i]) {
        case ')':
            x = s.top();
            s.pop();
            break;
        }
    }
    return (s.empty());
}

int main()
{
    string a;
    cin >> a;
    if (areBracketsBalanced(a))
        cout << "Balanced";
    else
        cout << "Not Balanced";
    return 0;
}
