#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n,i,j;
    cin >> n;
    int *a = new int[n];
    int *b = new int[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    for(int i=0;i<n;i++)
        cin >> b[i];
    if(accumulate(a,a+n,0) != accumulate(b,b+n,0))
    {
        cout << "-1 \n";
        return;
    }
    vector <int> u,v;
    for(i=0;i<n;i++)
    {
        for(j=0; j<n;j++)
        {
            while(a[i] > b[i] && a[j] < b[j])
                a[i]--; b[j]++;
            u.push_back(i+1);
            v.push_back(j+1);
        }
        cout<< u.size() << "\n";
        for(i=0;i<n;i++)
            cout << u[i] << " "<< v[i]<<"\n";
    }
    delete[]a;
    delete[]b;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        solve();
}
