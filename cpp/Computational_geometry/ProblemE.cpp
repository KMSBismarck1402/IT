#include <bits/stdc++.h>
using namespace std;
using i64 = long long;
using ld = long double;
 
#define sqr(x) ((x)*(x))
 
const ld PI = acos(-1);
 
struct Point {
    ld x;
    ld y;
 
    Point(ld _x = 0, ld _y = 0) {
        x = _x, y = _y;
    }
 
    ld getDist() const {
        return sqrt(sqr(x) + sqr(y));
    }
 
    Point operator-(const Point& that) const {
        return Point(this->x - that.x, this->y - that.y);
    }
 
    Point operator+(const Point& that) const {
        return Point(this->x + that.x, this->y + that.y);
    }
 
    Point operator*(const ld& scalar) const {
        return Point(scalar * this->x, scalar * this->y);
    }
};
 
int main() {
    freopen("bisector.in", "r", stdin);
    freopen("bisector.out", "w", stdout);
 
    Point X, Y, Z;
    cin >> X.x >> X.y;
    cin >> Y.x >> Y.y;
    cin >> Z.x >> Z.y;
 
    Point bisectVector = (Y-X) * (Z-X).getDist() + (Z-X) * (Y-X).getDist();
 
    ld a = -bisectVector.y;
    ld b = bisectVector.x;
    ld c = -(a*X.x + b*X.y);
 
 
    cout << fixed << setprecision(10) << a << ' ' <<b << ' '<< c;
}