//
//  main.cpp
//  Lect-12 Detect Cycle in Undirectional DFS
//
//  Created by Himanshu Bairwa on 07/10/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION: DETECT CYCLE IN UNDIRECTIONAL GRAPH USING DFS
 
 LINK: https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
 
 CODE:
 
 class Solution {
   
   private:
   bool dfs(int node, int parent,int vis[], vector<int> adj[]){
       vis[node] = 1;
       
       for(auto neighbour : adj[node]){
           if(!vis[neighbour]){
               if(dfs(neighbour,node,vis,adj) == true){
                   return true;
               }
               
           }else if(neighbour != parent){
               return true;
           }
       }
       return false;
   }
   
   
   
   public:
     // Function to detect cycle in an undirected graph.
     bool isCycle(int V, vector<int> adj[]) {
        int vis[V] = {0};
        for(int i = 0; i<V; i++){
            if(!vis[i]){
                if(dfs(i,-1,vis,adj) == true){
                    return true;
                }
            }
        }
        return false;
     }
 };
 
 
 */
