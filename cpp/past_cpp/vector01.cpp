#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> v;
    int x;
    cin >> x;
    while (x != 0)
    {
        v.push_back(x);
        cin >> x;
    }
    int nv = v.size();
    for (int i = 0; i < nv; i++)
        cout << v[i] << " ";
    cout << "\n------------------------------\n";

    for (vector <int> :: iterator t = v.begin(); t != v.end(); t++)
        cout << *t << " ";
    cout << "\n------------------------------\n";

    for (auto it = v.begin(); it != v.end(); it++)
        cout << *it << " ";
    cout << "\n------------------------------\n";

    for (int k : v)
        cout << k << " ";
    cout << "\n------------------------------\n";

    for (int i = v.size() - 1; i >= 0; i--)
        cout << v[i] << " ";
    cout << "\n------------------------------\n";

    for (int i = v.size() - 1; i >= 0; i--)
        cout << v.at(i) << " ";
    cout << "\n------------------------------\n";


    for (vector <int> :: reverse_iterator t = v.rbegin(); t != v.rend(); t++)
        cout << *t << " ";
    cout << "\n------------------------------\n";

    for (auto t = v.rbegin(); t != v.rend(); t++)
        cout << *t << " ";
    cout << "\n------------------------------\n";

    cout << v.front() << " " << v.back() << "\n";

}
