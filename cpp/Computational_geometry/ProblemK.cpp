#include <bits/stdc++.h>
using namespace std;
int main(){
    freopen("intersec1.in","r",stdin);
    freopen("intersec1.out","w",stdout);
    int a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    c1 *= -1;
    c2 *= -1;
    double D = a1*b2 - a2*b1    , Dx = c1*b2 - c2*b1, Dy = a1*c2 - a2*c1;
    double x = 1.0*Dx/D, y = 1.0*Dy/D;
    cout << fixed << setprecision(10) << x << " " << y;
    return 0;
}