//
//  main.cpp
//  Lect-11 Detect cycle in undirectional BFS
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
 QUESTION : DETECT CYCLE IN UNDIRECTIONAL GRAPH USING DFS
 
 LINK: https://practice.geeksforgeeks.org/problems/detect-cycle-in-an-undirected-graph/1
 
 CODE:
 
 class Solution {
   
   private:
   bool detect(int src,vector<int> adj[], int vis[]){
       vis[src] = 1;
       queue<pair<int,int>> q;
       q.push({src,-1});
       
       while(!q.empty()){
           int node = q.front().first;
           int parent = q.front().second;
           q.pop();
           
           for(auto neighbour: adj[node]){
               if(!vis[neighbour]){
                   vis[neighbour] = 1;
                   q.push({neighbour,node});
               }
               else if (parent != neighbour){
                   return true;
                   
               }
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
                 if(detect(i,adj,vis) == true){
                     return true;
                 }
             }
         }
         return false;
     }
 };
 
 */
