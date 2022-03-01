#include<iostream>
#include<vector>
using namespace std;


int main(){

    int n,m;

    cin >> n >> m;

    vector<pair<int,int>> adj[n+1];

    for(int i=0;i<m;i++){
        int u,v,weight;

        cin >> u >> v >> weight;

        adj[u].push_back({v,weight});
        adj[v].push_back({u,weight});
    }
}