#include <bits/stdc++.h>
#include <vector>
using namespace std;
/*
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int64_t n, d=0,i,tmpindx,x;
    cin >> n;
    vector<int> v;
    vector<int> dau;
    vector<int>::iterator tmpit;
    for (i=0; i<n; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    for(i=0;i<n;i++)
    {
        if(tmpit == v.end())
            tmpindx=n;
        else
            tmpindx = tmpit - v.begin();
        d+=(dau[i]*(dau[i]-1)/2)*(tmpindx-dau[i])+dau[i]*(dau[i]-1)*(dau[i]-2)/6;
    }
    cout << d;
    return 0;
}
*/

long long a;
long long lap=0;
long long tong=0;
long long test=-1;
int so[1000000];
int j;
int main()
{
    cin >> a;
    for (int i = 1;i<=a;i++)
    {
        cin >> so[i];
    }
    sort(so+1,so+a+1);
    for (int i = 1;i<=a;i++)
    {
        if (so[i]!=test)
        {
            if (lap>1)
            {
                for (j = a;j>=i;j--)
                {
                    if (so[i-1]*2>so[j])
                    {
                        break;
                    }
                }
                tong=tong+((lap*(lap-1))/2)*(j-lap)+((lap*(lap-1)*(lap-2))/6);
            }
            lap=1;
            test=so[i];
        }
        else
        {
            lap++;
            if (i==a&&lap>1)
            {
                tong=tong+((lap*(lap-1))/2)*(a-lap)+((lap*(lap-1)*(lap-2))/6);
            }
        }
    }
    cout << tong;
    return 0;
}
