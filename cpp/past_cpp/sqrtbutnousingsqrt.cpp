#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d,i;
    cin >> c;
    a=1;
    b=c;
    d=0;
    while( b!= (a+1))
    {
        if((b*b) > c)
        {
            b=(a+b)/2;
            cout << " a = "<<a <<" b= "<<b;
        }
        else if (( b*b) == c)
        {
            a = b;
            b=b+1;
        }
        else if ( (b*b) < c)
        {

            b = (a+b)*2;
            a=(a+b)/2;
            cout << " a = "<<a <<" b= "<<b;
        }
    }
    cout << " a = "<<a;
}
