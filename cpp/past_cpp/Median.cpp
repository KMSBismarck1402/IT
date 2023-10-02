#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int n,i,s;
    cin >> n;
    vector<int> v;
    cin >> s;
    v.push_back(s); cout << v[0] << "\n";
    cin >> s;
    v.push_back(s);
    sort(v.begin(), v.end());
    cout << v[0] <<" "<< v[1]<<"\n";
    for(i=2;i<n;i++)
    {
        cin >> s;
        v.insert(upper_bound(v.begin(),v.end(),s),s);
        if((i+1)%2 )
            cout << v[i/2]<<"\n";
        else
            cout << v[i/2]<<" "<<v[i/2+1]<<"\n";
    }
}
