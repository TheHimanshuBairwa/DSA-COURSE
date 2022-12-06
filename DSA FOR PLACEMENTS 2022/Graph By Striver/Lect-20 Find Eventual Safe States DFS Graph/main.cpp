//
//  main.cpp
//  Lect-20 Find Eventual Safe States DFS Graph
//
//  Created by Himanshu Bairwa on 08/10/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


/*
 
 QUESTION: Find Eventual Safe States
 
 LINK: https://practice.geeksforgeeks.org/problems/eventual-safe-states/1
 
 CODE:
 
 class Solution {
   
   private:
   bool dfsCheck(int node, vector<int>adj[], int vis[], int pathVis[],
                 int checkVis[]){
       vis[node] = 1;
       pathVis[node] = 1;
       checkVis[node] = 0;
       
       // traverse adjacent nodes
       for(auto it :adj[node]){
           // when the node is not visited
           if(!vis[it]){
               if(dfsCheck(it,adj,vis,pathVis,checkVis) == true){
                   checkVis[node] = 0;
                   return true;
                   
               }
           }
            // if the node has been already visited
            // but it has to be visited on the same path
           else if(pathVis[it]){
               checkVis [node] = 0;
                   return true;
               }
       }
       checkVis[node] = 1;
       pathVis[node] = 0;
       return false;
   }
   
   
   public:
     vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
         int vis[V] = {0};
         int pathVis[V] = {0};
         vector<int> safeNodes;
         int checkVis[V] = {0};
         for(int i = 0; i<V; i++){
             if(!vis[i]){
                 dfsCheck(i,adj,vis,pathVis,checkVis);
                  
                 
             }
         }
         for(int i = 0; i<V; i++){
             if(checkVis[i] == 1)    safeNodes.push_back(i);
         }
         return safeNodes;
     }
 };
 
 
 
 
 
 */
