#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool checkcycle(int node, int parent, vector<int> visited, vector<int> adj[])
{
    visited[node] = 1;
    for (auto it : adj[node])
    {
        if (!visited[it])
        {
            if (checkcycle(it, node, visited, adj))
            {
                return true;
            }
        }
        else if (it != parent)
        {
            return true;
        }
    }
    return false;
}

bool isCyclic(int V, vector<int> adj[])
{
    vector<int> visited(V, 0);

    for (int i = 0; i < V; i++)
    {
        if (!visited[i])
        {
            if (checkcycle(i, -1, visited, adj))
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

    vector<int> adj[V + 1];

    for (int i = 0; i < E; i++)
    {

        int u, v;
        cin >> u >> v;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout << isCyclic(V, adj);

    return 0;
}