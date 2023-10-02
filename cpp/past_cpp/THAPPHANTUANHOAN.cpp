#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;

int ucln(ull a , ull b)
{
    ull c;
    c = a % b ;
    while (c != 0)
    {
        a = b;
        b = c;
        c = a % b;
    }
    return b;
}

int main()
{
    string s,n;
    cin >> s;
    ull i=0,j=0,a,b,c=s.length(),d,e,f,g,o,p;
    while(s[i] != '(' )
        i++;
    while(s[j] != '.')
        j++;
    if ( (i-1) == j)
    {
        b = c-i-2;
        n = s.substr(i+1,b);
        a = stoull(n);
        n = s.substr(0,i-1);
        d = stoull(n);
        b = pow(10,b)-1;
        //ket qua la d+a/b
        cout << d*(b/ucln(a,b))+a/ucln(a,b) <<"/"<<b/ucln(a,b);
    }
    else
    {
        b = c-i-2; b=pow(10,b)-1;
        n = s.substr(j+1,i-j-1);
        f =n.length();
        f=pow(10,f);
        b = b*f;
        e = stoull(n);
        n = s.substr(0,j);
        d = stoull(n);
        n = s.substr(i+1,s.length()-1);
        a = stoull(n);
        //ket qua la d + a/b + e/f
        g = ucln(e,f);
        o = d*f/g+e/g; p = f/g;
        g = ucln(o,p);
        o = o/g;p=p/g;
        g = ucln(a,b);
        a = a/g; b = b/g;
        o = o*b+a*p; p=p*b;
        g = ucln(o,p);
        o = o/g;p=p/g;
        cout << o <<"/"<< p;
    }
}
