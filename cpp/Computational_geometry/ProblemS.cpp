#include <bits/stdc++.h>
using namespace std;
 
#define FILE_INP freopen("position.in", "r", stdin);
#define FILE_OUT freopen("position.out", "w", stdout);
 
#define deb(x) cout << #x << "=" << x << endl
#define precision(n) fixed << setprecision(n)
#define endl "\n"
#define no "NO"
#define yes "YES"
 
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define PI 3.141592653589793238462
 
using namespace std;
void solve()
{
    double x,y,X,Y,a,b,c;
    cin >> x >> y >> X >> Y >> a >> b >> c;
    string result = (a*x+b*y+c)*(a*X+b*Y+c)>0?yes:no;
    cout << result;
}
signed main()
{
    FILE_INP
    FILE_OUT
    fast;
    solve();
}