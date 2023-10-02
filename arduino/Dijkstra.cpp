#include<bits/stdc++.h>
using namespace std;
ifstream fin("DIJKSTRA.INP");
ofstream fout("DIJKSTRA.OUT");
//   ADJUST THESE PARAMS TO FIT THE MAP
//--------------------------------------
#define numV 10
#define numE 15
#define start 0
#define finish 9

int graph[numV][numV]{
    {0,100,100,0,0,0,0,0,0,0},
    {100,0,141,0,0,0,0,0,0,0},
    {100,141,0,100,50,0,0,0,0,0},
    {0,0,100,0,0,0,50,0,0,0},
    {0,0,50,0,0,50,0,50,0,0},
    {0,0,0,0,50,0,50,0,50,0},
    {0,0,0,50,0,50,0,0,100,0},
    {0,0,0,0,50,0,0,0,50,200},
    {0,0,0,0,0,50,100,50,0,150},
    {0,0,0,0,0,0,0,200,150,0}
};
int pq_index_of_dis[numV]={0,1,2,3,4,5,6,7,8,9};
//--------------------------------------
int dis[numV], previous[numV], visited[numV], path[50]={};
bool visited_station[7]={0,0,0,0,0,0,0};
int length_path=0;
bool station[7] = {0,0,1,1,0,0,1};
//with parameter length, this function can heapify
//a PQ with specified length
//unused element can be transferred to the end
void heapify_smallest(int *b, int index, int length){
    int smallest=index;
    if(index*2+1<length){
        heapify_smallest(b,index*2+1,length); 
        if(dis[b[smallest]]>dis[b[index*2+1]]) smallest=index*2+1;
    }
    if(index*2+2<length){
        heapify_smallest(b,index*2+2,length); 
        if(dis[b[smallest]]>dis[b[index*2+2]]) smallest=index*2+2;
    }
    if(smallest!=index){
        swap(b[smallest],b[index]);
    }
}

void swap(int &a, int &b){int c=a; a=b; b=c;}

void addPath(int current){
    if(previous[current]!=-1){
    //     length_path++;
    //     path[length_path]=current;
    // }else{
        addPath(previous[current]);
        length_path++;
        path[length_path]=current;
    }
}

void input_empty_edge(){
    int num_empty_edge, u, v;
    fin >> num_empty_edge;
    for(int i=0; i< num_empty_edge; i++){
        fin >> u >> v;
        graph[u][v]=0;
        graph[v][u]=0;
    }
}

int findNearestStation(int s){
    //pre-dijkstra
    for(int i=0;i<numV;i++){
        dis[i]=INT_MAX;
        visited[i]=false;
    }
    memset(previous,-1,sizeof(previous));
    int length=numV, temp_dis, end_of_path=0;
    int station_min_dis=INT_MAX, min_dis=INT_MAX;
    dis[s]=0;
    previous[s]=-1;
    visited[s]=true;

    //dijkstra
    while(length>0){// check empty
        heapify_smallest(pq_index_of_dis,0,length);
        int V_smallest_dis=pq_index_of_dis[0];
        for(int i=0;i<numV;i++){
            if( !visited[i] && graph[V_smallest_dis][i]>0 ){
                temp_dis=dis[V_smallest_dis]+graph[V_smallest_dis][i];
                if(temp_dis< dis[i]){
                    dis[i]=temp_dis;
                    if(
                        temp_dis<station_min_dis &&
                        (i==2 || i==3 || i==6) &&
                        !visited_station[i]
                    ){
                        min_dis=temp_dis;
                        station_min_dis=i;
                    }
                    previous[i]=V_smallest_dis;
                }
            }
        }
        //transfer unused element to back (0th element)
        swap(pq_index_of_dis[0],pq_index_of_dis[length-1]);
        //reduce length need to be heapified
        length--;
    }
    visited_station[station_min_dis]=true;
    addPath(station_min_dis);
    return station_min_dis;
}

int findWarehouse(int s){
    //pre-dijkstra
    for(int i=0;i<numV;i++){
        dis[i]=INT_MAX;
        visited[i]=false;
    }
    memset(previous,-1,sizeof(previous));
    int length=numV, temp_dis, end_of_path=0;
    dis[s]=0;
    previous[s]=-1;
    visited[s]=true;

    //dijkstra
    while(length>0){// check empty
        heapify_smallest(pq_index_of_dis,0,length);
        int V_smallest_dis=pq_index_of_dis[0];
        for(int i=0;i<numV;i++){
            if( !visited[i] && graph[V_smallest_dis][i]>0 ){
                temp_dis=dis[V_smallest_dis]+graph[V_smallest_dis][i];
                if(temp_dis< dis[i]){
                    dis[i]=temp_dis;
                    previous[i]=V_smallest_dis;
                }
            }
        }
        //transfer unused element to back (0th element)
        swap(pq_index_of_dis[0],pq_index_of_dis[length-1]);
        //reduce length need to be heapified
        length--;
    }
    addPath(8);
    return 8;
}
int check_pass_station()
{
    int i=1;
    while(path[i]!=0)
        station[path[i]]=0;
    int s=0;
    for(i=0;i<7;i++)
    s+=station[i];
    return s;
}
void createPath(){
    int first_time = 1;
    while(check_pass_station()!=0 || first_time==1)
    {
        int vertext_min_dis=findNearestStation(start);
        vertext_min_dis=findWarehouse(vertext_min_dis);
        first_time=0;
    }
    // vertext_min_dis=findNearestStation(vertext_min_dis);
    // vertext_min_dis=findWarehouse(vertext_min_dis);
    // vertext_min_dis=findNearestStation(vertext_min_dis);
    // vertext_min_dis=findWarehouse(vertext_min_dis);
    length_path++; path[length_path]=9;
}

void createDirection(){

}

int main(){
    input_empty_edge();
    createPath();
    fout << 0 << " ";
    int i=1;
    while(path[i]!=0){
        fout << path[i] << " ";
        i++;
    }
    return 0;
}