#include <bits/stdc++.h>
using namespace std;

struct psduong
{
    int tu;
    int mau;
};

struct psam
{
    int tu;
    int mau;
};

int sosanhd(const void *pa, const void *pb)
{
    const psduong a=*((const psduong*)pa),b=*((const psduong*)pb);
    double x = double(a.tu)/(a.mau);
    double y = double(b.tu)/(b.mau);
    if (x <y)
        return -1;
    else if (x > y)
        return 1;
    else
        return a.tu - b.tu;
}

int sosanha(const void *pa, const void *pb)
{
    const psam a=*((const psam*)pa),b=*((const psam*)pb);
    double x = double(a.tu)/(a.mau);
    double y = double(b.tu)/(b.mau);
    if (x > y)
        return -1;
    else if (x < y)
        return 1;
    else
        return a.tu - b.tu;
}

int main()
{
    int n,i,s,demd =0 ,dema = 0, demko=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;
    static int o[1000000];
    static int c[10000];
    static psduong a[100000];
    static psam b[100000];
    for(i=0;i<n;i++)
    {
        cin >> o[i];
    }
    for(i=0;i<n;i++)
    {
        cin >> s;
        if (o[i] == 0)
        {
            c[demko] = s;
            demko++;
        }
        else if (s > 0)
        {
            if (o[i] > 0)
            {
                a[demd].tu = o[i];
                a[demd].mau = s;
                demd++;
            }
            else
            {
                b[dema].tu = o[i];
                b[dema].mau = s;
                dema++;
            }
        }
        else
        {
            if (o[i] > 0)
            {
                b[dema].tu = o[i];
                b[dema].mau = s;
                dema++;
            }
            else
            {
                a[demd].tu = o[i];
                a[demd].mau = s;
                demd++;
            }
        }
    }
    qsort(a,demd,sizeof(a[0]),sosanhd);
    qsort(b,dema,sizeof(a[0]),sosanha);
    sort(c,c+demko);
    for(i=0;i<demd;i++)
    {
        cout <<a[i].tu << " ";
    }
    for(i=0;i<demko;i++)
    {
        cout << 0 << " ";
    }
    for(i=0;i<dema;i++)
    {
        cout <<b[i].tu << " ";
    }
    cout << endl;
    for(i=0;i<demd;i++)
    {
        cout << a[i].mau<<" ";
    }
    for(i=0;i<demko;i++)
    {
        cout << c[i]<<" ";
    }
    for(i=0;i<dema;i++)
    {
        cout << b[i].mau<<" ";
    }
}

