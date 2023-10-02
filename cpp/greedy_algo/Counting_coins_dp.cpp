#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[m+1];
    for(int i=1;i<=m;i++)
        cin>>a[i];
    int dp[m+1][n+1];
    memset(dp,0,sizeof(dp));
    for(int i=1;i<=m;i++)
        dp[i][0]=1;
    for(int i=1;i<=m;i++)
        for(int j=1;j<=n;j++)
            if(j>=a[i])
                dp[i][j]=dp[i-1][j]+dp[i][j-a[i]];
            else
                dp[i][j]=dp[i-1][j];
    cout<<dp[m][n]<<endl;
    return 0;
}