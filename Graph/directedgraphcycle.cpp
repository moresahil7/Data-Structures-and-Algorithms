#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool checkcycle(int node, vector<int> visited, vector<int> dfsVisited, vector<int> adj[])
{
    visited[node] = 1;
    dfsVisited[node] = 1;

    for(auto it : adj[node])
    {
        if(!visited[it])
        {
            if(checkcycle(it, visited, dfsVisited, adj))
            {
                return true;
            }
        }
        else if(dfsVisited[it])
        {
            return true;
        }
    }
    
    dfsVisited[node] = 0;
    return false;

   
}

bool isCyclic(int V, vector<int> adj[])
{
    vector <int> visited(V,0);
    vector <int> dfsVisited(V,0);


    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            if (checkcycle(i, visited, dfsVisited, adj))
            {
                return true;
            }
        }
    }

    return false;
}

int main()
{

    int V, E;

    cout << "Enter no of Vertices: ";
    cin >> V;
    cout << "Enter no of Edges: ";
    cin >> E;

    vector<int> adj[V+1];

    for (int i = 0; i < E; i++)
    {

        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        // adj[v].push_back(u);
    }

    cout << isCyclic(V, adj);

    return 0;
}