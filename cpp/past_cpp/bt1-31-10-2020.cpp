#include <bits/stdc++.h>
using namespace std;

int main ()
{
    int h,p,s,h1,p1,s1;
    cout << "nhap vao h , p and s";
    cin >> h >> p >> s;
    if ( (h < 0) || (h > 24) || (p < 0) || (p > 60) || (s < 0)  || (s > 60))
    {
        cout << "lam lai";
    }
    else if ((h > -1) && ( h < 25) && ( p -1) && (p <61) && (s > -1 ) && ( s < 61))
    {
        if (s < 60)
        {
            s1 = s;
        }
        if (s=60)
        {
            p1 = p++;
            s1 = 0;
        }
        if (p < 60)
        {
            p1 = p;
        }
        if ( p = 60)
        {
            h1 = h++;
            p1 = 0;
        }
        if (h < 24)
        {
            h1 = h;
        }
        if (h = 24)
        {
            h1 = h++;

        }
        cout << h1 << p1 << s1;
    }
}

