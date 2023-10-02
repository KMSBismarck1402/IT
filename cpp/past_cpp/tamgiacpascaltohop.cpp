#include <bits/stdc++.h>
using namespace std;

int giaithua(int n)
{
    int gt=1;
    for (int i=1; i<=n; i++)
        gt=gt*i;
    return gt;
}

int ckn(int k, int n)
{
    return (giaithua(n)/(giaithua(k)*giaithua(n-k)));
}

void xuattg( int h )
{
    int i, j;
    for( i = 0; i < h; i++ )
    {
        for (j=1; j<=((h*4)/2)-2*i; j++)
            cout << " ";
        for( j = 0; j <= i; j++ )
            cout << "  "<<ckn( j, i );
        cout << endl;
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    if (k > (n-k))
    {k = n-k;}
    cout << ckn(k, n)<< endl;
    xuattg(10);
}
