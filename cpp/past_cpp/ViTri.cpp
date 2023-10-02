#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("ViTri.INP","r",stdin);
    freopen("ViTri.OUT","w",stdout);
    unsigned long long m, n, a, s=0, input, cuont=1;
    cin >> m >> a;
    for(int i=0;i<m;i++)
    {
        cin >> n;
        for(int j=0;j<n;j++)
        {
            cin >> input;
            if(inp<a)
                cuont++;
            else if(input==a)
                s++;
        }
    }
    if(!s)
        cout << -1;
    else cout << cuosnt;
}
