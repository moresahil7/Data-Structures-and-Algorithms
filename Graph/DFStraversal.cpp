#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;



void solveDFS(int node, vector<int> adj[], vector<int> &storeDFS, vector<int> &visited){

    storeDFS.push_back(node);
    visited[node] = 1;

    for(auto it : adj[node]){
        solveDFS(it,adj,storeDFS,visited);
    }

}



vector<int> dfs(int V,vector<int> adj[]){
    vector<int> storeDFS;
    vector<int> visited(V+1,0);

    for(int i=1;i<=V;i++){
        if(!visited[i]){

            solveDFS(i,adj,storeDFS,visited);

        }
    }
    return storeDFS;
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

    vector<int> ans = dfs(V,adj);

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}