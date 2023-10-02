#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL);
    int t, n, m, x, y, j, j1; unsigned long long s, s1;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        s=0;
        cin >> n >> m >> x >> y;
        s1=min(x*2,y);
        j=min(n,m);
        s=(j-1)*s1;
        j1=max(m-j,n-j);
        if(j1%2)
        {
            j1--;
            s=s+(j1/2*min(x*2,y*2))+x;
        }
        else
            s=s+(j1/2+j-1)*min(x*2,y*2);
        cout << s << "\n";
    }
}
