#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int bs(ull a[], int l, int r, int j)
{
    int m;
    while(l<= r)
    {
        m= (l+r)/2;
        if (a[m]==j)
            return m;
        if (j >a[m])
            l= m+1;
        else
            r= m-1;
    }
    return -1;
}

void solve()
{
    int n,i,k,j=0,o,p=0,c;
    cin >> n;
    int *a = new int[n];
    ull s=0;
    ull *b = new ull[n];
    cin >> a[0];
    b[0] = a[0];
    s = a[0];
    for(i=1;i<n;i++)
    {
        cin >> a[i];
        b[i] = b[i-1] + a[i];
        s+=a[i];
    }
    cout << 1;
    for(i=2;i<=n;i++)
    {
        if(s%i==0)
        {
            k=s/i;
      //      cerr << k <<" ";
            c=1;
            for(j=k;j<b[n-1];j+=k)
            {
                p=0;
                o=p;
                p = bs(b,p,n-2,j);
      //          cerr << p<<" ";
                if(p== -1)
                {
                    p=o;
                    c=0;
                    break;
                }
            }
       //     cerr << "c= "<<c<<" ";
            if(c)
                cout << 1;
            else
                cout << 0;
        }
        else
            cout << 0;
    }
    cout << "\n";
    delete []a;
    delete []b;
}

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    while(t--)
        solve();
}

/*
3
3
1 2 3
5
4 1 3 2 5
2
1 1
111001000...
*/
