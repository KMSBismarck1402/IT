#include <bits/stdc++.h>
using namespace std;

#define Point pair<double, double>
#define F first
#define S second

bool onSegment(Point p, Point q, Point r)
{
	if (q.F <= max(p.F, r.F) && q.F >= min(p.F, r.F) &&
		q.S <= max(p.S, r.S) && q.S >= min(p.S, r.S))
	return true;

	return false;
}

int orientation(Point p, Point q, Point r)
{
	int val = (q.S - p.S) * (r.F - q.F) -
			(q.F - p.F) * (r.S - q.S);

	if (val == 0) return 0; 

	return (val > 0)? 1: 2; 
}

bool doIntersect(Point p1, Point q1, Point p2, Point q2)
{
	int o1 = orientation(p1, q1, p2);
	int o2 = orientation(p1, q1, q2);
	int o3 = orientation(p2, q2, p1);
	int o4 = orientation(p2, q2, q1);
	if (o1 != o2 && o3 != o4)
		return true;
	if (o1 == 0 && onSegment(p1, p2, q1)) return true;
	if (o2 == 0 && onSegment(p1, q2, q1)) return true;
	if (o3 == 0 && onSegment(p2, p1, q2)) return true;
	if (o4 == 0 && onSegment(p2, q1, q2)) return true;

	return false;
}

double minDistance(Point A, Point B, Point E)
{
    pair<double, double> AB;
    AB.F = B.F - A.F;
    AB.S = B.S - A.S;
    pair<double, double> BE;
    BE.F = E.F - B.F;
    BE.S = E.S - B.S;
    pair<double, double> AE;
    AE.F = E.F - A.F,
    AE.S = E.S - A.S;
    double AB_BE, AB_AE;
    AB_BE = (AB.F * BE.F + AB.S * BE.S);
    AB_AE = (AB.F * AE.F + AB.S * AE.S);
    double reqAns = 0;
    if (AB_BE > 0) 
    {
        double y = E.S - B.S;
        double x = E.F - B.F;
        reqAns = sqrt(x * x + y * y);
    }
    else if (AB_AE < 0) 
    {
        double y = E.S - A.S;
        double x = E.F - A.F;
        reqAns = sqrt(x * x + y * y);
    }
    else 
    {
        double x1 = AB.F;
        double y1 = AB.S;
        double x2 = AE.F;
        double y2 = AE.S;
        double mod = sqrt(x1 * x1 + y1 * y1);
        reqAns = abs(x1 * y2 - y1 * x2) / mod;
    }
    return reqAns;
}

int main()
{
    freopen("distance5.in","r",stdin);
    freopen("distance5.out","w",stdout);
	struct Point p1,q1,p2,q2;
    cin >> p1.F >> p1.S >> q1.F >> q1.S >> p2.F >> p2.S >> q2.F >> q2.S;
	if(doIntersect(p1, q1, p2, q2))
    {
        cout << 0;
        return 0;
    }
    else
    {
        double d1 , d2, d3 , d4;
        d1 = minDistance(p1,q1,p2);
        d2 = minDistance(p1,q1,q2);
        d3 = minDistance(p2,q2,p1);
        d4 = minDistance(p2,q2,q1);
        cout << fixed << setprecision(10) << min({d1,d2,d3,d4});
    }
}
