#include <bits/stdc++.h>
using namespace std;

int ntcn(int a,int b)
{
    int r;
    while(b)
        r = a % b, a = b, b = r;
    return (a == 1);
}

int ucln(long a , long b)
{
    long c;
    c = a % b ;
    while (c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

void solve()
{
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int i,d,lim,n=1,m=2,a,b,c=0,s,k=0,l,g,s1,s2;
    vector<int> p;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    set<int> x;
    set<int> y;
    set<int> z;
    set<int>::iterator it;
    cin >> d;
    lim = d/2;
    while(c < lim)
    {
        for(n=1;n<m;++n)
        {
            if(ntcn(m,n))
            {
                a = m * m - n * n;
                b = 2 * m * n;
                c = m * m + n * n;
                if(a>b)
                    swap(a,b);
                s=a+b+c;
                g=ucln(a,b);
                g=ucln(g,c);
                a/=g;
                b/=g;
                c/=g;
                s1=x.size()+y.size()+z.size();
                x.insert(a);
                y.insert(b);
                z.insert(c);
                s2=x.size()+y.size()+z.size();
                if(s1==s2)
                {
                    v1.push_back(a);
                    v2.push_back(b);
                    v3.push_back(c);
                    s=a+b+c;
                    p.push_back(s);
                }
            }
        }
        m++;
    }
 /*   cout << x.size() <<"\n";
    for(it=x.begin();it!=x.end();it++)
        cout << *it << " ";
    cout << "\n";
    for(it=y.begin();it!=y.end();it++)
        cout << *it << " ";
    cout << "\n";
    for(it=z.begin();it!=z.end();it++)
        cout << *it << " ";
    cout << "\n";

    while(x.empty()==0)
    {
        p.push_back(*x.begin()+*y.begin()+*z.begin());
        cout << p[0]<<" ";
        it=x.upper_bound(*x.begin());
        cout << *it << " ";
        x.erase(it);
        it=y.upper_bound(*y.begin());
        cout << *it <<" ";
        y.erase(it);
        it=y.upper_bound(*y.begin());
        cout <<*it <<" ";
        y.erase(it);

        p.push_back(*x.begin()+*y.begin()+*z.begin());
        it=x.begin();
        x.erase(it);
        it=y.begin();
        y.erase(it);
        it=z.begin();
        z.erase(it);
    }
    */
    l=p.size();
    for(i=0;i<l;i++)
    {
  //      cerr << p[i]<<" ";
        if(d%p[i]==0)
            k++;
    }
    cout << k<<"\n";
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

/*
6
12
60
120
160
3120
3360
*/
