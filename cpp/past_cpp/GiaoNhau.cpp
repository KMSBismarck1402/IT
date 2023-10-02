#include <bits/stdc++.h>
using namespace std;

void catnhau(int tx,int ty,int tt,int ttx,int tty,int dpx,int dpy)
{
    int i;
    int tpx = ttx,tpy = dpy ,dtx = dpx ,dty = tty;
    int tttx = tx - tt , ttty = ty - tt,  ttpx = tx + tt , ttpy = ty - tt , tdtx = tx-tt, tdty = ty + tt , tdpx = tx + tt , tdpy = ty + tt;
    int x1 = tttx , y1 = ttty, w1 = 2*tt , h1 = 2*tt , x2 = ttx , y2 = tty, w2 = dpx - ttx , h2 = dpy - tty;
    cout <<"toa do hinh vuong toa boi hinh tron : "<<tpx <<" "<< tpy <<" "<< dtx << " "<< dty<<endl;
    cout <<x1 <<" "<< y1 << " "<< w1<<" "<<h1<<" "<<x2<<" "<<y2<<" "<<w2<<" "<< h2;
//    if ((x1+w1 >= x2) && (x2+w2 >= x1) && (y1+w1 >= y2) && (y2+w2 >= y1))
}

int main()
{
  //  freopen("GiaoNhau.INP","r",stdin);
    //freopen("GiaoNhau.OUT","w",stdout);
    int n,i;
    cin >> n;
    int tx[n],ty[n],tt[n],ttx[n],tty[n],dpx[n],dpy[n];
    for(i=0;i<n;i++)
    {
        cin >> tx[i] >> ty[i] >> tt[i] >> ttx[n] >>tty[i] >> dpx[i] >> dpy[i];
    }
    for (i=0;i<n;i++)
    {
        catnhau(tx[i],ty[i],tt[i],ttx[i],tty[i],dpx[i],dpy[i]);
    }
}
