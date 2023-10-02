#include <bits/stdc++.h>
using namespace std;
 
int main(){
    freopen("point3.in","r",stdin);
    freopen("point3.out","w",stdout);
    double xa,ya,xb,yb,xc,yc,ab,ac,cb;
    cin>>xa>>ya>>xb>>yb>>xc>>yc;
    cb=sqrt((xc-xb)*(xc-xb)+(yc-yb)*(yc-yb));
    ab=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
    ac=sqrt((xa-xc)*(xa-xc)+(ya-yc)*(ya-yc));
    if (cb==ab+ac) cout<<"Yes";
    else cout<<"No";
}