#include<iostream>
using namespace std;

void dfs(int i){
    visited[i] = true;
    cout << i;
    for(int j = 0; j < 4 ;j++){
        if(a[i][j]==1 && visited[j] == false){
            dfs(j);
    }
    }
}
bool visited[4]={false,false,false,false}; // unvisited nodes 
   
//graph in form of adjacency matrix 
    int a[4][4] = {
            {0,1,0,0},
            {1,0,1,1},
            {0,1,0,1},
            {0,1,1,0}
    };
int main(){
    dfs(0);
return 0;
}
    