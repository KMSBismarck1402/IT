#include <iostream>
using namespace std;

bool cungben(double xa,double xb, double ya,double yb, double xc, double yc, double xn, double yn)
{
    int a,b,c;
    a=ya-yb;
    b=xb-xa;
    c=xa*xb-xb*ya;
    return (a*xc+b*yc+c)*(a*xn+b*yn+c)>0;
}

int main ()
{
    int ax,ay,bx,by,cx,cy,dx,dy,nx,ny;
    cout << "nhap toa do cac diem ";
    cin >> ax >> ay >> bx >> by >> cx >> cy >> nx >> ny;
    if ((cungben(ax,bx,ay,by,cx,nx,cy,ny)) && (cungben(bx,cx,by,cy,ax,nx,ay,ny)) && (cungben(cx,ax,cy,ay,bx,nx,by,ny)))
        cout << "cung ben";
    else cout << "khac ben";
}
