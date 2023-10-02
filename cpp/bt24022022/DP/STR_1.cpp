#include <bits/stdc++.h>
using namespace std;

void BDX(string a, string b)
{
    int step;
    int n = a.size();
    int m = b.size();
    int L[n+1][m+1];
    for(int i=0; i<=n; i++)
        L[i][0] = i;
    for(int j=0; j<=m; j++)
    {
        L[0][j] = j;
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            if(a[i-1] == b[j-1])
                L[i][j] = L[i-1][j-1];
            else
                L[i][j] = min(L[i-1][j],min(L[i-1][j-1], L[i][j-1])) + 1;
        }
    }

    step = L[n][m];
    cout <<step<<"\n";
    int i = n;
    int j = m;
    while(i >=0 && j >=0)
    {
        if(a[i-1] == b[j-1])
        {
            i--;
            j--;
        }
        else
        {
            if( L[i-1][j] <= L[i-1][j-1] &&  L[i-1][j] <= L[i][j-1])
            {
                cout <<a[i-1]<<"\n";
                i--;
            }
            else if( L[i-1][j-1] < L[i-1][j] && L[i-1][j-1] <= L[i][j-1])
            {
                cout<<b[j-1]<<"\n";
                i--;
                j--;
            }
            else{
                cout<<a[i-1]<<"\n";
                j--;
            }

        }
    }
}

int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	freopen("STR.INP", "r", stdin);
	freopen("STR.OUT", "w", stdout);
    string a, b;
    cin>>a;
    cin>>b;
    BDX(a,b);
    return 0;
}
