#include <bits/stdc++.h>
using namespace std;

int n, m;
vector<int> a, b, c;

void solve(){
    int F[m+1][n+1];
    for(int i = 0; i <= m; ++i)
        F[i][0] = 0;
    for(int j = 0; j <= n; ++j)
        F[0][j] = 0;
    for(int i = 1; i <= m; ++i){
        for(int j = 1; j <= n; ++j){
            if(a[i-1] == b[j-1])
                F[i][j] = F[i-1][j-1] + 1;
            else
                F[i][j] = max(F[i-1][j], F[i][j-1]);
        }
    }
    vector<int> aRes, bRes;
    cout << F[m][n] << "\n";
    int i = m, j = n;
    while(F[i][j] != 0){
        if(a[i-1] == b[j-1]){
            c.push_back(a[i-1]);
            aRes.push_back(i);
            bRes.push_back(j);
            i--;
            j--;
        }else{
            if(F[i-1][j] >= F[i][j-1])
                i--;
            else
                j--;
        }
    }
    vector<int>::reverse_iterator rit;
    for(rit = c.rbegin(); rit != c.rend(); ++rit)
        cout << *rit << " ";
    cout << "\n";
    for(rit = aRes.rbegin(); rit != aRes.rend(); ++rit)
        cout << *rit << " ";
    cout << "\n";
    for(rit = bRes.rbegin(); rit != bRes.rend(); ++rit)
        cout << *rit << " ";
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("COMSEQ.INP","r",stdin);
    freopen("COMSEQ.OUT","w",stdout);
    cin >> m >> n;
    for(int temp, i = 0; i < m; ++i){
        cin >> temp;
        a.push_back(temp);
    }
    for(int temp, i = 0; i < n; ++i){
        cin >> temp;
        b.push_back(temp);
    }
    solve();
    return 0;
}
