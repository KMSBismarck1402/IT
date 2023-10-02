#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    double n,s,a;
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> s >> a;
        cout << a*n-s - int((n-1)/2) <<" "<< a*n-s + int((n-1)/2)<<"      ";
        cout << ceil(max(0,int(a*n-0.5*n-s))) <<" "<<min(100,int(floor(a*n+0.5*n-s-0.1)))<<"\n";
    }
}

/*
3
4 0 0
2 100 100
10 200 25

0 1
99 100
45 54
*/
