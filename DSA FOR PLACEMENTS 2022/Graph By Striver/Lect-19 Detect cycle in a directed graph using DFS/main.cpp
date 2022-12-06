//
//  main.cpp
//  Lect-19 Detect cycle in a directed graph using DFS
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
 
 QUESTION: Detect cycle in a directed graph using DFS
 
 LINK: https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
 
 CODE:
 
 class Solution {
   
   private:
   bool dfsCheck(int node, vector<int>adj[], int vis[], int pathVis[]){
       vis[node] = 1;
       pathVis[node] = 1;
       
       // traverse adjacent nodes
       for(auto it :adj[node]){
           // when the node is not visited
           if(!vis[it]){
               if(dfsCheck(it,adj,vis,pathVis) == true){
                   
                   return true;
                   
               }
           }
            // if the node has been already visited
            // but it has to be visited on the same path
           else if(pathVis[it]){
                   return true;
               }
       }
       pathVis[node] = 0;
       return false;
   }
   
   
   
   public:
     // Function to detect cycle in a directed graph.
     bool isCyclic(int V, vector<int> adj[]) {
         int vis[V] = {0};
         int pathVis[V] = {0};
         
         for(int i = 0; i<V; i++){
             if(!vis[i]){
                 if(dfsCheck(i,adj,vis,pathVis) == true){
                     return true;
                 }
             }
         }
         return false;
     }
 };
 
 
 */
