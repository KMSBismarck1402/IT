#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n,i;
    set<int> s;
    cin >> n;
    int *a = new int [n];
    for(i=0;i<n;i++)
    {
        cin >> a[i];
        s.insert(a[i]);
    }
    cout << s.size()<<"\n";
    for(auto i:s)
    {
    cout<<i<<" ";
    }
}
