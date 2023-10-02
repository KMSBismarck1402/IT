#include <bits/stdc++.h>
using namespace std;

struct pii
{
    int first,second;
    int x,y;
};

bool cmp(pii a,pii b)
{
    return (a.first < b.first);
}

bool cmp2(pii a,pii b)
{
    return (a.second < b.second);
}

int main()
{
    freopen("stat.inp","r",stdin);
    freopen("stat.out","w",stdout);
    int n,i,d,j,ck=0,f;
    cin >> n;
    struct pii a[n];
    for(i=0;i<n;i++)
    {
        cin >> a[i].first;
        a[i].second=i;
    }
    sort(a,a+n,cmp);
    for(i=0;i<n;i++)
    a[0].x=0;
    j=1;
    while(a[j-1].first==a[j].first)
            j++;
    a[0].y=n-a[0].x-j;
    for(i=j;i<n;i++)
    {
        a[i].x=i;
        f=i;
        while(a[i].first==a[i+1].first)
        {
            i++;
            ck=1;
        }
        a[f].y=n-1-i;
        if(ck==1)
        {
            j=i;
            while(a[j].first==a[j-1].first)
            {
                a[j].x=a[f].x;
                a[j].y=a[f].y;
                j--;
            }
            ck=0;
        }
    }
    sort(a,a+n,cmp2);
    for(i=0;i<n;i++)
        cout <<a[i].x <<" "<<a[i].y<<"\n";
}

/*
6
1 3 2 3 6 4
*/
