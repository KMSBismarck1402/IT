#include<bits/stdc++.h>
using namespace std;
ifstream fin("MAP.TXT");
ofstream fout("DIJKSTRA.OUT");

    int graph[10][10];
    int dis[10];
    int pq_index_of_dis[10]={0,1,2,3,4,5,6,7,8,9,};
    int visited[10];
    const int ACTUAL_LENGTH=10;

int numV, numE, start=0, finish=9;

//with parameter length, this function can heapify
//a PQ with specified length
//unused element can be transferred to the end of PQ
void heapify_smallest(int *b, int index, int length){
    int smallest=index;
    if(index*2+1<length){
        heapify_smallest(b,index*2+1,length);
        if(dis[b[smallest]]>dis[b[index*2+1]]) 
            smallest=index*2+1;
    }
    if(index*2+2<length){
        heapify_smallest(b,index*2+2,length);
        if(dis[b[smallest]]>dis[b[index*2+2]]) 
            smallest=index*2+2;
    }
    if(smallest!=index){
        swap(b[smallest],b[index]);
    }
}

void input(){
    int u,v,weight;
    fin >> numV >> numE;
    for(int i=0;i<numE;i++){
        fin >> u >> v >> weight;
        graph[u][v]=weight;
        graph[v][u]=weight;
    }
}

void dijkstra(int s){
    //pre-dijkstra
    for(int i=0;i<numV;i++)
    dis[i]=INT_MAX;
    int length=10, temp_dis;
    dis[s]=0;
    memset(visited,0,sizeof(visited));
    visited[s]=true;
    //dijkstra
    while(length>0){// check empty
        heapify_smallest(pq_index_of_dis,0,length);
        int V_smallest_dis=pq_index_of_dis[0];
        for(int i=0;i<numV;i++)
        {
            if( !visited[i] && graph[V_smallest_dis][i]!=0 )
            {
                temp_dis=dis[V_smallest_dis]+graph[V_smallest_dis][i];
                if(temp_dis< dis[i])
                    dis[i]=temp_dis;
            }
        }
        //transfer unused element to back (top)
        swap(pq_index_of_dis[0],pq_index_of_dis[length-1]);
        //reduce length need to be heapified
        length--;
    }

}

int main(){
    input();
    int ip[7]= {0,2,8,3,8,6,8};
    int op[7]= {2,8 ,3,8,6,8,9};
    for(int i=0;i<7;i++)
    {        
        dijkstra(ip[i]);
            fout << ip[i] <<"->"<<op[i]<< ": " << dis[op[i]] << "\n";
    }
    return 0;
}
