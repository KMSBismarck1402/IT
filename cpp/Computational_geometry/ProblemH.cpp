#include<bits/stdc++.h>
using namespace std;
 
double  xC,yC,xA,yA,xB,yB,
        temp1,temp2,
        h;
signed main()
{
    freopen("distance3.in","r",stdin);
    freopen("distance3.out","w",stdout);
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    cin >> xC >> yC >> xA >> yA >> xB >> yB;
    // AB*AC
    temp1 = (xB-xA)*(xC-xA)+(yB-yA)*(yC-yA);
    // BA*BC
    temp2 = (xA-xB)*(xC-xB)+(yA-yB)*(yC-yB);
    if (temp1 < 0)
    {
        h = sqrt((xC-xA)*(xC-xA) + (yC-yA)*(yC-yA));
    }
    else
    {
        // AB * AC
        temp1 = (xB-xA)*(yC-yA) - (xC-xA)*(yB-yA);
        // AB
        temp2 = sqrt((xB-xA)*(xB-xA)+(yB-yA)*(yB-yA));
        h = abs(temp1/temp2);
    }
    cout << fixed << setprecision(6) << h;
    return 0;
}