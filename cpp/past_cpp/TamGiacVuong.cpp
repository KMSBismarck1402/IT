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
/*
void solve()
{
    int i,d,lim,n=1,m=2,a,b,c=0,k=0,l,g,s0,s1,s2,s3,s01,s02,s03,s;
    vector<int> p;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    set<int> x;
    set<int> y;
    set<int> z;
    set<int>::iterator it;
    d=5000;
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
                g=ucln(a,b); g=ucln(g,c);
                a/=g; b/=g; c/=g;
                s01=x.size(); s02=y.size(); s03=z.size(); s0=s01+s02+s03;
                x.insert(a); y.insert(b); z.insert(c);
                s1=x.size(); s2=y.size(); s3=z.size();
                s=s1+s2+s3;
                if(s0==s-3)
                {
                    p.push_back(a+b+c);
                    v1.push_back(a);
                    v2.push_back(b);
                    v3.push_back(c);
                }
         /*       else
                {
                    if(s1>s01)
                    {
                        it=x.begin();
                        x.erase(it);
                    }
                    if(s2>s02)
                    {
                        it=y.begin();
                        y.erase(it);
                    }
                    if(s3>s03)
                    {
                        it=z.begin();
                        z.erase(it);
                    }
                }
            }
        }
        m++;
    }
    cout << "set 1 : ";
    for(it=x.begin();it!=x.end();it++)
        cout << *it << " ";
    cout << "\n";
    cout << "set 2 : ";
    for(it=y.begin();it!=y.end();it++)
        cout << *it << " ";
    cout << "\n";
    cout << "set 3 : ";
    for(it=z.begin();it!=z.end();it++)
        cout << *it << " ";
    cout << "\n";

    cout << "vector 1 : ";
    for(i=0;i<v1.size();i++)
        cout << v1[i]<<" ";
    cout << "\n ";
    cout << "vector 2 : ";
    for(i=0;i<v2.size();i++)
        cout << v2[i]<<" ";
    cout << "\n ";
    cout << "vector 3 : ";
    for(i=0;i<v3.size();i++)
        cout << v3[i]<<" ";
    cout << "\n ";

    cout << "vector p : ";
    l=p.size();
    for(i=0;i<l;i++)
    {
        cerr << p[i]<<" ";
        if(d%p[i]==0)
            k++;
    }
    cout << "ans = "<<k<<"\n";
}
*/
int main()
{
 //   freopen("tamgiacvuong.inp","r",stdin);
   // freopen("tamgiacvuong.out","w",stdout);
    ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL);
    int t;
    cin >> t;
    int i,d,lim,n=1,m=2,a,b,c=0,k=0,l,g,s0,s1,s2,s3,s01,s02,s03,s,ip;
    vector<int> p;
    vector<int> v1;
    vector<int> v2;
    vector<int> v3;
    set<int> x;
    set<int> y;
    set<int> z;
    set<int>::iterator it;
    d=10000;
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
                g=ucln(a,b); g=ucln(g,c);
                a/=g; b/=g; c/=g;
                s01=x.size(); s02=y.size(); s03=z.size(); s0=s01+s02+s03;
                x.insert(a); y.insert(b); z.insert(c);
                s1=x.size(); s2=y.size(); s3=z.size();
                s=s1+s2+s3;
                if(s0==s-3)
                {
                    p.push_back(a+b+c);
                    v1.push_back(a);
                    v2.push_back(b);
                    v3.push_back(c);
                }
         /*       else
                {
                    if(s1>s01)
                    {
                        it=x.begin();
                        x.erase(it);
                    }
                    if(s2>s02)
                    {
                        it=y.begin();
                        y.erase(it);
                    }
                    if(s3>s03)
                    {
                        it=z.begin();
                        z.erase(it);
                    }
                } */
            }
        }
        m++;
    }
    cout << "set 1 : ";
    for(it=x.begin();it!=x.end();it++)
        cout << *it << " ";
    cout << "\n";
    cout << "set 2 : ";
    for(it=y.begin();it!=y.end();it++)
        cout << *it << " ";
    cout << "\n";
    cout << "set 3 : ";
    for(it=z.begin();it!=z.end();it++)
        cout << *it << " ";
    cout << "\n";

    cout << "vector 1 : ";
    for(i=0;i<v1.size();i++)
        cout << v1[i]<<" ";
    cout << "\n ";
    cout << "vector 2 : ";
    for(i=0;i<v2.size();i++)
        cout << v2[i]<<" ";
    cout << "\n ";
    cout << "vector 3 : ";
    for(i=0;i<v3.size();i++)
        cout << v3[i]<<" ";
    cout << "\n ";
    l=p.size();
    cout << "vector p : ";
    for(i=0;i<l;i++)
        cout << p[i]<<" ";
    k=0;
    while(t--)
    {
        cin >> ip;
        for(i=0;i<ip;i++)
        {
            if(ip%p[i]==0)
                k++;
            if(p[i]>ip)
                break;
        }
        cout << "ans = "<<k<<"\n";
    }
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
