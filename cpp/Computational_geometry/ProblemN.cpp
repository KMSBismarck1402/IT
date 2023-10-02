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
        Point p(b.x + this->x, b.y + this->y);
        return p;
    }
    Point operator-(const Point &B)
    {
        Point p(B.x - this->x, B.y - this->y);
        return p;
    }
    Point operator*(double x)
    {
        Point p(this->x * x, this->y * x);
        return p;
    }
    bool operator==(Point b)
    {
        return (this->x == b.x) && (this->y == b.y);
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

class Vec2 : public Point
{
public:
    Point Pstart, Pend;
    Point vec;
    Vec2(int a = 0, int b = 0) : vec(a, b) {}
    Vec2(Point a, Point b)
    {
        Pstart = a, Pend = b;
        this->vec = this->Pend - this->Pstart;
    }
    // Nhap tu ban phim
    friend istream &
    operator>>(istream &input, Vec2 &v)
    {
        input >> v.vec;
        return input;
    }
};

class Phaptuyen : public Point
{
public:
    Point pt;
    Phaptuyen(int a = 0, int b = 0)
    {
        pt.setPoint(a, b);
    }
    Phaptuyen(Point a)
    {
        pt = a;
    }
    Phaptuyen(Vec2 v)
    {
        pt.setPoint(-v.vec.y, v.vec.x);
    }
    friend istream &operator>>(istream &input, Phaptuyen &p)
    {
        input >> p.pt;
        return input;
    }
    friend ostream &operator<<(ostream &output, const Phaptuyen p)
    {
        output << "n=(" << p.pt.x << "; " << p.pt.y << ")";
        return output;
    }
};

class Line : public Point
{
public:
    int a, b, c;
    Line(int x = 0, int y = 0, int z = 0) : a(x), b(y), c(z)
    {
        int d = __gcd(this->a, this->b);

        if ((d == __gcd(this->b, this->c)) and (d != 0))
        {
            this->a = this->a / d;
            this->b = this->b / d;
            this->c = this->c / d;
        }
    }
    Line(Point A, Point B)
    {
        Point AB = B - A;
        int d = __gcd(-AB.y, AB.x);
        this->a = -AB.y / d;
        this->b = AB.x / d;
        this->c = this->a * -A.x + this->b * -A.y;
    }
    Line(Vec2 v)
    {
        int d = __gcd(-v.vec.y, v.vec.x);
        this->a = -v.vec.y / d;
        this->b = v.vec.x / d;
        this->c = this->a * -v.Pstart.x + this->b * -v.Pstart.y;
    }
    Line(Point p, Phaptuyen pt)
    {
        this->a = pt.pt.x;
        this->b = pt.pt.y;
        this->c = this->a * -p.x + this->b * -p.y;
    }
    double distance(Point A)
    {
        return abs(this->a * A.x + this->b * A.y + this->c) / (sqrt(pow(this->a, 2) + pow(this->b, 2)));
    }
    Line
    operator+(const Line &b)
    {
        Line l(this->a + b.a, this->b + b.b, this->c + b.c);
        return l;
    }
    Line operator-(const Line &b)
    {
        Line l(this->a - b.a, this->b - b.b, this->c - b.c);
        return l;
    }
    friend istream &
    operator>>(istream &input, Line &l)
    {
        input >> l.a >> l.b >> l.c;
        l.c = -l.c;
        return input;
    }
    friend ostream &operator<<(ostream &output, const Line l)
    {
        output << l.a << ' ' << l.b << ' ' << l.c;
        return output;
    }
};

void solve()
{
    Point p;
    Phaptuyen pt;
    cin >> p >> pt;
    Line l(p, pt);
    cout << l;
}

signed main()
{
    FILE_INP("line2.in")
    FILE_OUT("line2.out")
    fast;
    solve();
}
