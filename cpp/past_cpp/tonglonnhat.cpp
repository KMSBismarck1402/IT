#include <iostream>
using namespace std;

int main()
{
    int i,y,n,j,k,p;
    int m [10000];
    int s[10000];
    int a[100];
    cout << "nhap kich thuoc mang n ";
    cin >> n;
    k = 0;
    for (i = 1; i <= n; ++i){
        cout << i << " := ";
        cin >> a[i] ;}
    for (y = 1; y <= n; y++)
    {
        for (i =1; i <=n;i++)
        {
            s[i] =+ a[i];
        }
        for(j =1; j <= y;j++)
        {
            k =+ a[j];
            m[y]= s[y] - k;
        }
    }
    for (i = 2; i <= n*n;i++)
    {
        if (m[i] > m[i-1])
        {
            p = m[i];
        }
        if (m[i] < m[i-1])
        {
            p = m[i-1];
        }
    }
    cout << p;
    return 0;
}

