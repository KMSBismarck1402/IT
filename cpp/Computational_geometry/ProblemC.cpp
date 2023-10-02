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

double polygonArea(Point p[], int n)
{
    double area;
    int j = n - 1;
    for (int i = 0; i < n; i++)
    {
        area += (p[j].x + p[i].x) * (p[j].y - p[i].y);
        j = i;
    }
    return abs(area / 2);
}

void solve()
{
    int n;
    cin >> n;
    Point a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << precision(6) << polygonArea(a, n);
}

signed main()
{
    FILE_INP("area.in")
    FILE_OUT("area.out")
    fast;
    solve();
}
