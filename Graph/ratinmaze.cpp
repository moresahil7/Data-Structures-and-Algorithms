#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;





void ratPathDfs(int row, int col,int n,vector<string> &V,string s, vector<vector<int>> &visited, vector<vector<int>> &m){

    if(row<0 || row>=n || col<0 || col>=n){
        return;
    }

    if(m[row][col] == 0 || visited[row][col] == 1 ){
        return;
    }

    if(row == n-1 && col == n-1){
        V.push_back(s);
        return;
    }

    visited[row][col] = 1;

    ratPathDfs(row+1,col,n,V,s+"D", visited,m);
    ratPathDfs(row-1,col,n,V,s+"U", visited,m);
    ratPathDfs(row,col+1,n,V,s+"R", visited,m);
    ratPathDfs(row,col-1,n,V,s+"L", visited,m);


    visited[row][col] = 0;






}
vector<string> ratInmaze(int n, vector<vector<int>> &m){
    vector<string> V;
    vector<vector<int>> visited(n, vector<int>(n,0));
    if(m[0][0] == 0){
        return V;
    }
    if(m[n-1][n-1] == 0){
        return V;
    }
    string s;
    ratPathDfs(0,0,n,V,s,visited,m);
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

    vector<string> s = ratInmaze(n, m);

    for(int i=0;i<s.size();i++)
    {
        cout<<s[i]<<endl;
    }
}