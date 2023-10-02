#include<bits/stdc++.h>
using namespace std;

int main()
{
    freopen("crobot.inp","r",stdin);
    freopen("crobot.out","w",stdout);
    int x=0,y=0,n,i;
    int dx[4]={-1,0,1,0};
    int dy[4]={0,1,0,-1};
    string S;
    cin>>n>>S;
    int t = 1;
    for(i=0;i<n;i++)
    {
        if(S[i]=='L')
            t=(t+3)%4;
        else if(S[i]=='R')
            t=(t+1)%4;
        else if(S[i]=='B')
            t=(t+2)%4;
        x+=dx[t];
        y+=dy[t];
    }
    cout<<x<<" "<<y;
}

/*
5
RLGGL
*/

