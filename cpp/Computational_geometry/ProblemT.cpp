#include <bits/stdc++.h>
#define int double
using namespace std;

const int maxn = 2e5+1;

struct vec{
    int x,y;
}AB,CD,AC;
struct Point {
    int x, y;
}A,B,C,D;

vec twoPointsToVec(Point a, Point b)
{
    return {b.x-a.x, b.y-a.y};
}

int distanceBetweenTwoPoint(Point a, Point b)
{
    int x1 = a.x, y1 = a.y, x2 = b.x, y2 = b.y;
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) * 1.0);
}

double distToBeam(Point c, Point a, Point b)
{
    double xC = c.x,yC = c.y,xA = a.x,yA = a.y,xB = b.x,yB = b.y,temp1,temp2,h;
    if(a.x == b.x && a.y == b.y)
    {
        return distanceBetweenTwoPoint(a,c);
    }
    temp1 = (xB-xA)*(xC-xA)+(yB-yA)*(yC-yA);
    temp2 = (xA-xB)*(xC-xB)+(yA-yB)*(yC-yB);
    if (temp1 < 0)
    {
        h = sqrt((xC-xA)*(xC-xA) + (yC-yA)*(yC-yA));
    }
    else
    {
        temp1 = (xB-xA)*(yC-yA) - (xC-xA)*(yB-yA);
        temp2 = sqrt((xB-xA)*(xB-xA)+(yB-yA)*(yB-yA));
        h = abs(temp1/temp2);
    }
    return h;
}

bool check()
{
    int D1 = -1*(AB.x*CD.y-AB.y*CD.x),
        Du = -1*(AC.x*CD.y-AC.y*CD.x),
        Dv = AB.x*AC.y-AB.y*AC.x;
    if(abs(D1) != 0 && Du/D1 >= 0 && Dv/D1 >= 0)
    {
        return true;
    }
    if(Du == Dv && D1 == Du && Du == 0)
    {
        if(AB.x == 0 && AB.y == 0)
        {
            return distToBeam(A,C,D) == 0;
        }
        if(CD.x == 0 && CD.y == 0)
        {
            return distToBeam(C,A,B) == 0;
        }
    }
    return false;

}

void solve()
{
    cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y >> D.x >> D.y;
    AB = twoPointsToVec(A,B);
    CD = twoPointsToVec(C,D);
    AC = twoPointsToVec(A,C);
    int D1 = -1*(AB.x*CD.y-AB.y*CD.x),
        Du = -1*(AC.x*CD.y-AC.y*CD.x),
        Dv = AB.x*AC.y-AB.y*AC.x;
    if(check())
        cout << 0;
    else
    cout << fixed << setprecision(10) << min(distToBeam(C,A,B) ,distToBeam(A,C,D));
}
signed main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);
    freopen("raydist.in","r",stdin);
    freopen("raydist.out","w",stdout);
    solve();
    return 0;
}