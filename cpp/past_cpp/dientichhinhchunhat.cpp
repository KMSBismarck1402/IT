#include <bits/stdc++.h>
using namespace std;

struct  hcn
{
    int x1,y1;
    int x2,y2;
};


int tdt(const hcn h)
{
    return abs((h.x2- h.x1)*(h.y2 - h.y1));
}

int sosanh (const void *pa, const void *pb)
{
    const hcn a =*(const hcn*)pa, b = *(const hcn *)pb;
    return tdt(b)-tdt(a);
}

int main()
{
    int n;
    cin >> n;
    hcn a[n];
    for (int i = 0 ; i<n ; i++)
    { cin >> a[i].x1 >> a[i].y1 >> a[i].x2 >> a[i].y2;}
    qsort(a,n,sizeof(a[0]),sosanh);
    for(int j = 0 ; j<n;j++)
    {
        cout << tdt(a[j]) <<"\t";
    }
}
