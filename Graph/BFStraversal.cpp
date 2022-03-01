#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main() {
    int V,E;
    cin>>V>>E;
    vector<int> g[V+1];

    for(int i=0;i<E;i++){
    int u,v;
        
        cin>>u>>v;

        g[u].push_back(v);
        g[v].push_back(u);
    }

    for(int i=1;i<=V;i++){
        cout<<i<<"-> ";
        for(int j=0;j<g[i].size();j++){
            cout<<g[i][j]<<" ";
        }
        cout<<endl;
    }
   

}

