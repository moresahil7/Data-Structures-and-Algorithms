#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;




vector<int> bfs(int V, vector<int> adj[]){
    vector<int> bfs;
    vector<int> visited(V+1,0);
    
    queue<int> q;
    q.push(1);
    visited[1] = 1;
    


    while(!q.empty()){

        int node = q.front();
        q.pop();
        bfs.push_back(node);


        for(auto it: adj[node]){

            if(!visited[it]){
                q.push(it);
                visited[it] = 1;
            }
        }
    }
    return bfs;
}




int main(){


    int V,E;

    cout<<"Enter no of Vertices: ";
    cin>>V;
    cout<<"Enter no of Edges: ";
    cin>>E;

    vector <int>adj[V+1];


    for(int i=1;i<=E;i++){

        int u,v;
        cin>>u>>v;

        adj[u].push_back(v);
        // adj[v].push_back(u);
    }

    vector<int> ans = bfs(V,adj);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}