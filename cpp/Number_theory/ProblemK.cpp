#include <bits/stdc++.h>
using namespace std;
#define mx 100010
typedef long long ll;

const ll mod = 1e9 + 7;

struct node
{
    int x, y;
} a[mx];

int fa[mx], sz[mx], f[mx], id[mx], m[mx];
bool circ[mx], vis[mx];
vector<int> v[mx];
set<int> sx, sy;

bool c(int i, int j)
{
    return a[i].x < a[j].x || (a[i].x == a[j].x && a[i].y < a[j].y);
}

bool d(int i, int j)
{
    return a[i].y < a[j].y || (a[i].y == a[j].y && a[i].x < a[j].x);
}

ll pw(ll a, ll b)
{
    ll ret = 1;
    while (b)
    {
        if (b & 1)
            (ret *= a) %= mod;
        (a *= a) %= mod;
        b >>= 1;
    }
    return ret;
}

int sr(int x) { return fa[x] == x ? x : fa[x] = sr(fa[x]); }

void un(int a, int b)
{
    a = sr(a), b = sr(b);
    if (a == b)
    {
        circ[a] = true;
        return;
    }
    if (sz[a] > sz[b])
        swap(a, b);
    fa[a] = b;
    sz[b] += sz[a];
    circ[b] |= circ[a];
}

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i].x >> a[i].y;
    }
    for (int i = 0; i < n; ++i)
        id[i] = i;
    for (int i = 0; i < n; ++i)
        fa[i] = i, sz[i] = 1;
    sort(id, id + n, c);
    for (int i = 1; i < n; ++i)
        if (a[id[i]].x == a[id[i - 1]].x)
            un(id[i - 1], id[i]);
    sort(id, id + n, d);
    for (int i = 1; i < n; ++i)
        if (a[id[i]].y == a[id[i - 1]].y)
            un(id[i - 1], id[i]);
    for (int i = 0; i < n; ++i)
        fa[i] = sr(i);
    int tot = -1;
    for (int i = 0; i < n; ++i)
    {
        if (!vis[fa[i]])
            vis[fa[i]] = true, f[++tot] = fa[i], m[fa[i]] = tot;
        v[m[fa[i]]].push_back(i);
    }
    ll ans = 1;
    for (int i = 0; i <= tot; ++i)
    {
        sx.clear(), sy.clear();
        for (auto idx : v[i])
            sx.insert(a[idx].x), sy.insert(a[idx].y);
        ll ml = pw(2, sx.size() + sy.size());
        if (!circ[f[i]])
            (ml += mod - 1) %= mod;
        (ans *= ml) %= mod;
    }
    cout << ans;
}
