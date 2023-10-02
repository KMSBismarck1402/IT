#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct ps
{
    int tu,mau;
    bool operator < (const ps &b) const;
        double value() const {return double(tu)/mau;}
};

bool ps::operator < (const ps &b) const
{
    ll hieu = ll(tu) *b.mau - ll(mau)*b.tu;
    if (ll(mau)*b.mau < 0) hieu = -hieu;
    return hieu < 0;
}



int main()
{
    int n,i;
    ps a;
    set<ps> s;
    cin >> n;
    for(i=0;i<n;i++)
    {
        cin >> a.tu >> a.mau;
        s.insert(a);
    }
    cout << s.size();
}
