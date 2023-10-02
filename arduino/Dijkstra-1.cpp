#include<bits/stdc++.h>
using namespace std;
#define numV 6
#define numE 8
#define start 0
#define finish 10
ifstream fin("DIJKSTRA.INP");
ofstream fout("DIJKSTRA.OUT");

int graph[numV][numV]{
    {0,4,4,0,0,0},
    {4,0,4,0,0,0},
    {4,4,0,3,1,6},
    {0,0,3,0,0,2},
    {0,0,1,0,0,3},
    {0,0,6,2,3,0}
};
int dis[numV];
int pq_index_of_dis[numV]={0,1,2,3,4,5};
int visited[numV];

//with parameter length, this function can heapify
//a PQ with specified length
//unused element can be transferred to the end of PQ
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

void dijkstra(int s){
    //pre-dijkstra
    for(int i=0;i<numV;i++) dis[i]=INT_MAX;
    int length=numV, temp_dis;
    dis[s]=0;
    visited[s]=true;
    //dijkstra
    while(length>0){// check empty
        heapify_smallest(pq_index_of_dis,0,length);
        int V_smallest_dis=pq_index_of_dis[0];
        for(int i=0;i<numV;i++){
            if( !visited[i] && graph[V_smallest_dis][i]!=0 ){
                temp_dis=dis[V_smallest_dis]+graph[V_smallest_dis][i];
                if(temp_dis< dis[i]){
                    dis[i]=temp_dis;
                }
            }
        }
        //transfer unused element to back (top)
        swap(pq_index_of_dis[0],pq_index_of_dis[length-1]);
        //reduce length need to be heapified
        length--;
    }

}

int main(){
    dijkstra(start);
    for(int i=0;i<numV;i++) fout << i << ": " << dis[i] << "\n";
    
    return 0;
}