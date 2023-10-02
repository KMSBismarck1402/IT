#include <bits/stdc++.h>
using namespace std;
#define MAX 100005
#define INF 1e9
typedef pair<int,int> pii;
vector<pii> a[MAX];
int n,m,s;
int d[MAX];
bool vis[MAX];
void dijkstra(int s){
    priority_queue<pii,vector<pii>,greater<pii>> pq;
    for(int i=1;i<=n;i++) d[i]=INF;
    d[s]=0;
    pq.push({0,s});
    while(!pq.empty()){
        int u=pq.top().second;
        pq.pop();
        if(vis[u]) continue; // Đánh dấu đỉnh đã được xét
        vis[u]=true;
        for(auto v:a[u]){
            int x=v.first,y=v.second;
            if(d[x]>d[u]+y){ // Cập nhật khoảng cách ngắn nhất
                d[x]=d[u]+y;
                pq.push({d[x],x}); // Thêm đỉnh vào hàng đợi ưu tiên
            }
        }
    }
}
int main(){
    cin>>n>>m>>s; // Nhập số đỉnh, số cạnh và đỉnh bắt đầu
    for(int i=1;i<=m;i++){
        int u,v,w;
        cin>>u>>v>>w; // Nhập cạnh (u,v) có trọng số w
        a[u].push_back({v,w}); // Thêm cạnh vào danh sách kề của u
    }
    dijkstra(s); // Tìm đường đi ngắn nhất từ s đến các đỉnh khác
    for(int i=1;i<=n;i++) cout<<d[i]<<" "; // In ra khoảng cách ngắn nhất từ s đến các đỉnh khác
}