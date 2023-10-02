#include <bits/stdc++.h>
using namespace std;
#define ll long long
double a,b,c,r;
void solve(){
    cin>>a>>b>>c>>r;
    cout<<setprecision(10)<<a<<" "<<b<<" "<<c+(r*sqrt(a*a+b*b))<<"\n";
    cout<<setprecision(10)<<a<<" "<<b<<" "<<c-(r*sqrt(a*a+b*b))<<"\n";
}
 
int main(){
 
    freopen("line3.in", "r", stdin);
 
    freopen("line3.out", "w", stdout);                                                                                  
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t = 1;
    //cin>>t;
    while(t--){
        solve();
    }
    return 0;
}