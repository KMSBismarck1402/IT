#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
typedef unsigned long long ull ;

const int mx = 1000000;
int d[mx+10] ;
vector <int> v[mx+10] ;

void snt()
{
    for(int i=1;i<=mx;i++)
        for(int j=i;j<=mx;j+=i) 
            d[j]++;
    for(int i=2;i<=mx;i++)
    {
        if(v[i].size()==0)
        {
            for(int j=i;j<=mx;j+=i) 
                v[j].push_back(i);
        }
    }
}

int main()
{
    int a=0;
    snt();
    for(int i=1;i<=mx;i++)
    {
        int x = d[i] ;
        if(v[x].size()==2 && v[x][0]*v[x][1]==x)
        {
            a++;
            if(a%9==0) 
                cout << i <<"\n";
        }
    }
}