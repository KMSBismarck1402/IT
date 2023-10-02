#include <bits/stdc++.h>
using namespace std;

struct mp
{
    double x,y;
};

void mp_o(mp p)
{
    cout << "("<< p.x <<","<< p.y <<") \n";
}

void mp_m(mp *p,double dx, double dy)
{
    p->x += dx;
    p->y += dy;
}

double mp_d(mp p, mp d)
{
    double dx = p.x - d.x, dy = p.y-d.y;
    return sqrt(dx*dx+dy*dy);
}

int main()
{
    mp A = {6,9};
    mp B = {23,6};
    mp_o(A);
    mp_m(&A,1,4);
    mp_o(A);
    cout<<mp_d(A,B);
    cout << "\n";
}
