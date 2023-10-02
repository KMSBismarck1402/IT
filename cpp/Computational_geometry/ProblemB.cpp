#include <bits/stdc++.h>
using namespace std;

#define FILE_INP(x) freopen(x, "r", stdin);
#define FILE_OUT(x) freopen(x, "w", stdout);

#define precision(n) fixed << setprecision(n)
#define endl "\n"

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define PI 3.141592653589793238462

class Point
{
public:
    int x, y;
    Point(int a = 0, int b = 0) : x(a), y(b) {}
    Point operator+(const Point &b)
    {
        Point p;
        p.setPoint(b.x + this->x, b.y + this->y);
        return p;
    }
    Point operator-(const Point &B)
    {
        Point p;
        p.setPoint(B.x - this->x, B.y - this->y);
        return p;
    }
    void setPoint(int x, int y)
    {
        this->x = x;
        this->y = y;
    }
    Point &operator=(const Point &rhs)
    {
        x = rhs.x;
        y = rhs.y;
        return *this;
    }
    friend istream &operator>>(istream &input, Point &p)
    {
        input >> p.x >> p.y;
        return input;
    }
    friend ostream &operator<<(ostream &output, const Point &p)
    {
        output << "(" << p.x << "; " << p.y << ")";
        return output;
    }
    double Size()
    {
        return (sqrt(pow(this->x, 2) + pow(this->y, 2)));
    }
};
int dot(Point A, Point B)
{
    return A.x * B.x + A.y * B.y;
}

void solve()
{
    Point A, B;
    cin >> A >> B;
    double radian = acos(dot(A, B) / (A.Size() * B.Size()));
    cout << precision(6) << radian;
}

signed main()
{
    FILE_INP("angle2.in")
    FILE_OUT("angle2.out")
    fast;
    solve();
}
