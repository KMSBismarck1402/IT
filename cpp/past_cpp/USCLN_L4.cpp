#include <bits/stdc++.h>
using namespace std;

void solve()
{
    long long a,b,x,y,d;
    cin >> a >> b;
    if(a==b)
        cout << a <<" 0 \n";
    else
    {
        // cout << (max(a,b)-min(a,b)) <<" "<< min( max(a,b)-( max(a,b)/(max(a,b)-min(a,b)) )*(max(a,b)-min(a,b)), ((max(a,b)/(max(a,b)-min(a,b)))+1)*(max(a,b)-min(a,b)) - max(a,b) )<<"\n";
        x = max(a,b);y=min(a,b);d=x-y;
        cout << d <<" "<< min(x-(x/d)*d,((x/d)+1)*d-x)<<"\n";
    }
}

int main()
{
    int t;
    cin >> t;
    while(t--)
        solve();
}

/*
4
5 5
5 1
13 8
15 5
*/
