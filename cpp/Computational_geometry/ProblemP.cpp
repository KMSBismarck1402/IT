#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define PI 3.141592653589793238462
int main()
{
    freopen("point1.in","r",stdin);
    freopen("point1.out","w",stdout);
    fast;
    int x, y;
    int a, b, c;
    cin >>x >>y;
    cin >> a>> b>>c;
    (a*x + b*y + c == 0)?cout << "YES":cout<<"NO";
 
}