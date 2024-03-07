#include<iostream>
#include<queue>
using namespace std;

class search{
    bool visited1[4]={false,false,false,false}; // unvisited nodes FOR DFS
    bool visited_BFS[4]={false,false,false,false}; // unvisited nodes FOR BFS
//graph in form of adjacency matrix 
    int a[4][4] = {
            {0,1,0,0},
            {1,0,1,1},
            {0,1,0,1},
            {0,1,1,0}
    };
    public:
        void dfs(int i){
        visited1[i] = true;
        cout << i<< " ";
        for(int j = 0; j < 4 ;j++){
            if(a[i][j]==1 && visited1[j] == false){
                dfs(j);
        }
        }
    }

        void bfs(queue<int> q, int i){
            q.push(i);
            visited_BFS[i] = true;
        while(!q.empty()){
            int u = q.front();
            cout<<u<<" ";
            q.pop();
            for(int j = 0 ; j<4 ;j++){
                if(a[u][j] == 1 && visited_BFS[j] == false){
                    q.push(j);
                    visited_BFS[j] = true;
                }
            }
    }
        }
};
int main(){
    queue<int> q;
    search s;
    cout<<"DFS ";
    s.dfs(0);
    cout<<endl;
    cout<<"BFS ";
    s.bfs(q,3);
return 0;
}
    