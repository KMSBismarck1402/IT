#include <bits/stdc++.h>
using namespace std;

struct pii
{
    int first,second;
};

bool cmp(pii a,pii b)
{
    return (a.second > b.second);
}

int main()
{
    freopen("schedule.inp","r",stdin);
    freopen("schedule.out","w",stdout);
    int n,i,s=0,d=0,ans=0;
    cin >> n;
    struct pii a[n];
    for(i=0;i<n;i++)
        cin >> a[i].first >> a[i].second;
    sort(a,a+n,cmp);
    s=a[0].first;
    d=a[0].first+a[0].second;
    for(i=1;i<n;i++)
    {
        s+=a[i].first;
        d=max(d,s+a[i].second);
    }
    cout << d;

}

/*
4
2 21    23
4 11    23
2 11    23
3 10    23

4
2 14    16
4 11    17
2 11    19
3 10    21

4
2 21    23
4 21    27
2 11    27
10 10   28
*/
