#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,s,i,h,x,y;
    cin >> a>>b;
    x=(a/13)+1;
    y=(b/13)+1;
    s=(x+y)*(y-x)/2;
    s=s*13;
    h=(a+b)*(b-a+1)/2;
    i=h-s;
    cout << i;
}
