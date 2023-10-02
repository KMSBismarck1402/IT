#include <bits/stdc++.h>
using namespace std;

int N, M, a[101], b[101], F[101][101] = {0};

void solve(){
    for(int i = 1; i <= N; ++i)
        for(int j = 0; j <= M; ++j){
            F[i][j] = F[i-1][j];
            if(j >= b[i] && F[i][j] < F[i-1][j- b[i]] + a[i])
                F[i][j] = F[i - 1][j - b[i]] + a[i];
        }
    cout << F[N][M] << "\n";
    vector<int> res;
    vector<int>::reverse_iterator rit;
    while(N != 0){
        if(F[N][M] != F[N-1][M]){
            res.push_back(N);
            M -= b[N];
        }
        N--;
    }
    cout << res.size() << " ";
    for(rit = res.rbegin(); rit != res.rend(); ++rit)
        cout << *rit << " ";
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 //   freopen("CAYKHE.INP","r",stdin);
   // freopen("CAYKHE.OUT","w",stdout);
    cin >> N >> M;
    for(int i = 1; i <= N; ++i){
        cin >> a[i] >> b[i];
    }
    solve();
    return 0;
}
