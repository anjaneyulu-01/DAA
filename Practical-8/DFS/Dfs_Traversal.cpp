#include<iostream>
#include<vector>
using namespace std;

void DFS(int current,vector<vector<int>>&graph,vector<bool>&visited){
    visited[current]=true;
    cout<<current<<" ";
    for(int neighbor:graph[current]){
        if(!visited[neighbor]){
            DFS(neighbor,graph,visited);
        }
    }
}

int main(){
    vector<vector<int>>graph={
        {1,2},
        {0,3,4},
        {0,4},
        {1},
        {1,2}
    };
    vector<bool>visited(graph.size(),false);
    cout<<"DFS Traversal: ";
    DFS(0,graph,visited);
    return 0;
}