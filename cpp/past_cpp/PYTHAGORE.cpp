#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ULL;

int main()
{
    freopen("PYTHAGORE.INP","r",stdin);
    freopen("PYTHAGORE.OUT","w",stdout);
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
    {
    ULL p;
    cin >> p;
    ULL s=0;
    for(ULL a=1;a<p/2;a++)
        for(ULL b=1;b<p/2;b++)
        {
            ULL c=p-a-b;
            ULL d=a*a+b*b;
            if(a+b>c&&a+c>b&&b+c>a)
                if(d==c*c)
                    s++;
        }
    cout << s/2 << endl;
    }
}
