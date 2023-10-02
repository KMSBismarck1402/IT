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

void solve()
{
    Point p;
    cin >> p.x >> p.y;
    int a, b, c;
    cin >> a >> b >> c;
    cout << precision(6) << abs(a * p.x + b * p.y + c) / sqrt(a * a + b * b);
}

signed main()
{
    FILE_INP("distance1.in")
    FILE_OUT("distance1.out")
    fast;
    solve();
}
