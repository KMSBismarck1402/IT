#include <iostream>
#include <math.h>
using namespace std;

bool d[maxN] = {false};
void Sieve()
{
d[0] = d[1] = true;
m = sqrt(maxN);
for (x = 2; x <= m; ++x)
if (d[x] == false)
for (y = x; y <= maxN/x; ++y)
d[y*x] = true;
}

void snt(bool b[], int n)
{
    int i,j;
    b[0]=b[1]=true;
    m=sqrt(n);
    for(i=2;i<=m;++i)
        if (b[i]==false)
            for(j=i;j<=n/i;++k)
                d[y*x] = true;
}

void snt(bool b[],int n)
{
    int i,j;
    b[0]=b[1]=false;
    for (i=2;i<=n;i++)
    {
        b[i]=true;
    }
    for(i=2;i<=n;i++)
        if (b[i] && i <= n/i)
            for(j=i*i;j<=n;j+=i)
                b[j] = false;
}

bool ktnt(int n)
{
    int a = 2;
    while ((n % a != 0) && (a <= n/a))
        a++;
    return a > n/a;
}

int sntkt(int n)
{
    n++;
    while (ktnt(n));
        {n++;}
    return n;
}

int main ()
{
    int x , y , z , i , m;
    int a[1000] ;
    cin >> x;
    cout << "y = ";
    cin >> y;
    z = (x > 0 ? x : 1);
    for ( (i = 1) ; (i <= y) ; (i++ ))
    {
        z =  sntkt(z) ;
        cout << z << " ";
        a[i] = z;
    }
    cout << ".\n nhap so nguyen m ";
    cin >> m;
    cout << a[m];
}
