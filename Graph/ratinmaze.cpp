#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void ratPathDfs(int row, int col, vector<string> &V, string s, int n, vector<vector<int>> &m, vector<vector<int>> &visited)
{

    if (row < 0 || col < 0 || row >= n || col >= n) 
    {
        return;
    }

    if (m[row][col] == 0 || visited[row][col] == 1) 
    {
        return;
    }

    if (row == n - 1 && col == n - 1)  //when we reach destination
    {
        V.push_back(s);
        return;
    }

  

    // cout<<row<<" row ";
    // cout<<col<<" col ";


    visited[row][col] = 1;

    ratPathDfs(row + 1, col, V, s + "D", n, m, visited);
    ratPathDfs(row - 1, col, V, s + "U", n, m, visited); 
    ratPathDfs(row, col + 1, V, s + "R", n, m, visited);
    ratPathDfs(row, col - 1, V, s + "L", n, m, visited);

    visited[row][col] = 0;
}

vector<string> ratInMaze(int n, vector<vector<int>> &m)
{

    vector<string> V;

    vector<vector<int>> visited(n, vector<int>(n, 0));

    if (m[0][0] == 0)
    {
        return V;
    }

    if (m[n - 1][n - 1] == 0)
    {
        return V;
    }

    string s = "";


    ratPathDfs(0, 0, V, s, n, m, visited);

    sort(V.begin(),V.end());
    return V;
}

int main()
{

    vector<vector<int>> m = {
        {1, 0, 0, 0},
        {1, 1, 0, 1},
        {1, 1, 0, 0},
        {0, 1, 1, 1}
    };

    int n = 4;

    vector<string> s = ratInMaze(n, m);

    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<endl;
    }
}