//
//  main.cpp
//  Lect-87 DFS traversal in Graph
//
//  Created by Himanshu Bairwa on 11/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


/*
 QUESTION: DFS TRAVERSAL IN GRAPH
 
 LINK-->  https://www.codingninjas.com/codestudio/problems/dfs-traversal_630462
 
 CODE-->
 
 void dfs(int node,unordered_map<int,bool> &visited , unordered_map<int, list<int> > &adj,
         vector<int> &component){
     
 //    storing node in ans
     component.push_back(node);
     
 // marking visitd node = true which is stored in ans
     visited[node] = true;
     
     
     // for every connected node ke liye recursive call
     for(auto i: adj[node]){
         if(!visited[i]){
             dfs(i,visited,adj,component);
         }
     }
 }



 vector<vector<int>> depthFirstSearch(int V, int E, vector<vector<int>> &edges)
 {
    // prepare adjacency list
     unordered_map<int, list<int> > adj;
     for(int i  = 0;i<edges.size(); i++) {
         int u = edges[i][0];
         int v = edges[i][1];
         
         adj[u].push_back(v);
         adj[v].push_back(u);
     }
     
     vector<vector<int> > ans;
     unordered_map<int,bool> visited;
     
     // for all node call dfs if not visited
     for(int i = 0;i<V;i++){
         if(!visited[i]){
             vector<int> component;
             dfs(i,visited,adj,component);
             ans.push_back(component);
         }
     }
     
     
     return ans;
 }
 
 
 
 */
