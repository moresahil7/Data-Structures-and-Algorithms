#include<iostream>
#include<vector>
#include<queue>
using namespace std;



// vector<int> bfsTraversalGraph(int V, vector<int> adj[]){

//     vector<int> bfs;
//     vector<int> visited(V,0);
    

//     for(int i=1;i<=V;i++){
//         if(!visited[i]){

//             queue<int> q;
//             q.push(i);
//             visited[i] =1;

//             while(!q.empty()){
//                 int node = q.front();
//                 q.pop();
//                 bfs.push_back(node);

//                 for(auto it: adj[node]){
//                     if(!visited[it]){
//                         q.push(it);
//                         visited[it] = 1;

//                     }
//                 }

//             }
//         }
//     }
//     return bfs;

// }


int main() {

    int V,E;
    cin>>V>>E;

    vector<int> adj[V+1];

    for(int i=0;i<E;i++){
        int u,v;
        cin>> u  >> v ;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }



    for(int i=1;i<V;i++){
        cout<<i<<"-->";

        for(int j=0;j<adj[i].size();j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

   


    // // for(auto it: answer){
    // //     cout<<it<<" ";
    // // }
    // for(int i=1;i<answer.size();i++){
    //     cout<<answer[i]<<" ";
    // }

    
}
