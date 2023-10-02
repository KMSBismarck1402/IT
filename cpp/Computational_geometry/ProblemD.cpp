#include <bits/stdc++.h>
using namespace std;

#define FILE_INP(x) freopen(x, "r", stdin);
#define FILE_OUT(x) freopen(x, "w", stdout);

#define for0(i, n) for (int i = 0; i < n; i++)
#define for1(i, n) for (int i = 1; i <= n; i++)
#define loop(i, a, b) for (int i = a; i < b; i++)

#define precision(n) fixed << setprecision(n)
#define endl "\n"

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define PI 3.141592653589793238462

class Point
{
public:
    int x;
    int y;

    void setPoint(int a, int b)
    {
        this->x = a;
        this->y = b;
    }

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
    void outPoint()
    {
        cout << "\nToa do diem \n";
        cout << '(' << this->x << ", " << this->y << ')';
    }
};
int dot(const Point &A, const Point &B, const Point &C)
{
    Point AB;
    Point AC;
    AB.setPoint(B.x - A.x, B.y - B.y);
    AC.setPoint(C.x - A.x, C.y - A.y);
    return (AB.x * AC.x + AB.y * AC.y);
}
int cross(const Point &A, const Point &B, const Point &C)
{
    Point AB;
    Point AC;
    AB.setPoint(B.x - A.x, B.y - A.y);
    AC.setPoint(C.x - A.x, C.y - A.y);
    return (AB.x * AC.y - AB.y * AC.x);
}
double distance(const Point &A, const Point &B)
{
    Point p;
    p.setPoint(B.x - A.x, B.y - A.y);
    return sqrt(p.x * p.x + p.y * p.y);
}
double linePointDist(const Point &A, const Point &B, const Point &C)
{
    double dist = abs(cross(A, B, C)) / distance(B, C);
    return dist;
}
double areaTriangle(const Point &A, const Point &B, const Point &C)
{
    return 0.5 * abs((B.x - A.x) * (C.y - A.y) - (C.x - A.x) * (B.y - A.y));
}

void solve()
{
    Point a, b, c;
    cin >> a.x >> a.y;
    cin >> b.x >> b.y;
    cin >> c.x >> c.y;
    cout << precision(1) << areaTriangle(a, b, c);
}

signed main()
{
    FILE_INP("area1.in")
    FILE_OUT("area1.out")
    fast;
    solve();
}