#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[] = {3, 1, 5, 7, 2, 5, 8, 1, 9, 10, 2};
    int na = sizeof(a)/sizeof(a[0]);
    set <int> s;
    for (int i = 0; i < na; i++)
        s.insert(a[i]);

    for (int x : s)
        cout << x << " ";
    cout << "\n------------------------\n";

    set <int> :: iterator t;
    for (t = s.begin(); t != s.end(); t++)
        cout << *t << " ";
    cout << "\n------------------------\n";

    cout << *s.begin() << " " << *s.rbegin() << "\n";
    cout << "\n------------------------\n";

    for (auto t = s.begin(); t != s.end(); t++)
        cout << *t << " ";
    cout << "\n------------------------\n";

    for (auto t = s.rbegin(); t != s.rend(); t++)
        cout << *t << " ";
    cout << "\n------------------------\n";

    int x;
    cerr << "Nhap x: ";
    cin >> x;
    auto p = s.find(x);
    if (p != s.end())
    {
        cout << "Tim thay\n" << "\n";
        s.erase(p);
    }
    else
        cout << "Khong tim thay\n" << "\n";

    for (auto t = s.begin(); t != s.end(); t++)
        cout << *t << " ";
    cout << "\n------------------------\n";
}
