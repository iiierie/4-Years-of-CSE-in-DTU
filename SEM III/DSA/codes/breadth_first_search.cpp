#include<iostream>
#include<queue>
using namespace std;

queue<int> q;
int main(){
    bool visited[4]={false,false,false,false}; // unvisited nodes 
    int i =3; //starting node

    //graph in form of adjacency matrix 
        int a[4][4] = {
            {0,1,0,0},
            {1,0,1,1},
            {0,1,0,1},
            {0,1,1,0}
        };

    //visit the start node ani enqueue it 
    q.push(i);
    visited[i] = true;
    while(!q.empty()){
        int u = q.front();
        cout<<u<<" ";
        q.pop();
        for(int j = 0 ; j<4 ;j++){
             if(a[u][j] == 1 && visited[j] == false){
                q.push(j);
                visited[j] = true;
             }
        }
   }
   return 0;
}

