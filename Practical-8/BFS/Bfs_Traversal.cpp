#include <iostream>
#include <vector>
#include <queue>
using namespace std;

void BFS(int start, vector<vector<int>>& graph){
    vector<bool> visited(graph.size(), false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty()){
        int current = q.front();
        q.pop();

        cout << current << " ";

        for (int neighbor : graph[current]){
            if (!visited[neighbor]){
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main(){
    vector<vector<int>> graph ={
        {1,2},      
        {0,3,4},    
        {0,4},     
        {1},       
        {1,2}  
    };

    cout << "BFS Traversal: ";

    BFS(0, graph);

    return 0;
}