//
//  main.cpp
//  Lect-88 Cycle detection in undirected graphs
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
 QUESTION: CYCLE DETECTION IN UNDIRECTED GRAPHS
 
 LINK-->  https://www.codingninjas.com/codestudio/problems/cycle-detection-in-undirected-graph_1062670
 
 CODE-->  USING BFS AND DFS
 
 
 
 #include<unordered_map>
 #include<list>
 #include<queue>
 
 // USING BFS
 bool isCyclicBFS(int src,unordered_map<int,bool> &visited,unordered_map<int,list<int> > &adj) {
     unordered_map<int,int> parent;
     
     parent[src] = -1;
     visited[src] = 1;
     queue<int> q;
     q.push(src);
     
     while(!q.empty()){
         int front = q.front();
         q.pop();
         
         for(auto neighbour: adj[front]){
             if(visited[neighbour] == true && neighbour != parent[front]){
                 return true;
             }
             else if(!visited[neighbour]){
                 q.push(neighbour);
                 visited[neighbour] = 1;
                 parent[neighbour] = front;
             }
         }
         
     }
    return false;
 }

 // USING DFS
 bool isCyclicDFS(int node,int parent,unordered_map<int,bool> &visited,
                  unordered_map<int,list<int> > &adj) {
     
     visited[node] = true;
     
     for(auto neighbour: adj[node]){
         if(!visited[neighbour]){
             bool cycleDetected = isCyclicDFS(neighbour,node,visited,adj);
             if(cycleDetected)
                 return true;
         }
         else if(neighbour != parent){
             return true;
         }
     }
     return false;
 }

 string cycleDetection (vector<vector<int>>& edges, int n, int m)
 {
     // create adjacency list
     unordered_map<int,list<int> > adj;
     for(int i = 0; i < m; i++){
         int u = edges[i][0];
         int v = edges[i][1];
         
         adj[u].push_back(v);
         adj[v].push_back(u);
     }
     
     
     // to hadle discontinuity of graph
     unordered_map<int,bool> visited;
     for(int i = 0; i < n; i++){
         if(!visited[i]){
 //             bool ans = isCyclicBFS(i,visited,adj);
             bool ans = isCyclicDFS(i,-1,visited,adj);
             if(ans == 1)
                 return "Yes";
         }
     }
     return "No";
 }
------------------------------------------------------------------------------------------------------------------------------------------------------

GFG QUESTION: DETECT CYCLE IN UNDIRECTED GRAPH USING DFS

LINK:::: https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1


Code: 


class Solution {
  public:
    // Function to detect cycle in an undirected graph.
   
   bool hasCycle(int node,int parent,vector<int>&vis,vector<int>adj[]){
       vis[node]=true;
       for(auto x:adj[node]){
           if(!vis[x]){
               if(hasCycle(x,node,vis,adj)){
                   return true;
               }
           }
           else if(vis[x]==true and x!=parent){
               return true;
           }
       }
       return false;
   }
   
    bool isCycle(int V, vector<int> adj[]) {
         // Code here
       vector<int>vis(V,0);
       for(int i=0;i<V;i++){
           if(!vis[i]){
               if(hasCycle(i,-1,vis,adj)){
                   return true;
               }
           }
       }
       return false;
   
   
      
   
    }
};








 
 */
