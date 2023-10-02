#include <bits/stdc++.h>
#include <string>
using namespace std;
string X, Y;
int F[101][101];
int min3(int x, int y, int z){
    int temp = min(x,y);
    return min(temp, z);
}
void process(){
    int n = X.length();
    int m = Y.length();
    for(int i = 0; i <= n; ++i)
        F[i][0] = i;
    for(int j = 0; j <= m; ++j)
        F[0][j] = j;
    for(int i = 1; i <= n; ++i){
        for(int j = 1; j <= m; ++j){
            if(X[i-1] == Y[j-1])
                F[i][j] = F[i-1][j-1];
            else{
                F[i][j] = min3(F[i-1][j], F[i-1][j-1], F[i][j-1] ) + 1;
            }
        }
    }
    cout << F[n][m] << "\n";
    int i = n;
    int j = m;
    while(i >= 0 && j >= 0)
    {
        if(X[i - 1] == Y[j - 1])
        {
            i--;
            j--;
        }
        else
        {
            if(F[i - 1][j] <= F[i - 1][j - 1] &&  F[i - 1][j] <= F[i][j - 1])
            {
                cout << X << " -> " << "Delete(" << i << ") -> " << X.substr(0, i-1) << "\n";
                X = X.substr(0, i - 1);
                i--;
            }
            else if(F[i - 1][j - 1] < F[i - 1][j] && F[i - 1][j - 1] <= F[i][j - 1])
            {
                cout << X << " -> " << "Replace(" << i << ", " << Y[j - 1] << ") -> ";
                X[i - 1] = Y[j - 1];
                cout << X << "\n";
                i--;
                j--;
            }
            else
            {
                cout << X << " -> " << "Insert(" << i << ", " << Y[j-1] << ") -> ";
                X.insert(i, 1, Y[j - 1]);
                cout << X << "\n";
                j--;
            }

        }
    }
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("STR.INP","r",stdin);
    freopen("STR.OUT","w",stdout);
    cin >> X;
    cin >> Y;
    process();
    return 0;
}
