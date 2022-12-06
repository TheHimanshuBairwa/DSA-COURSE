//
//  main.cpp
//  Lect-27 Shortest path in weighted DAG TopoSort
//
//  Created by Himanshu Bairwa on 13/10/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


/*
 
 QUESTION: SHORTEST PETH IN WEIGHTED DAG USING TOPO SORT
 
 LINK: https://practice.geeksforgeeks.org/problems/shortest-path-in-undirected-graph/1
 
 CODE:
 
 class Solution {
  
 private:

  void topoSort(int node, stack<int> &st,int vis[],vector<pair<int,int>> adj[]){
      vis[node] = 1;
      
      for(auto it: adj[node]){
          int v = it.first;
          if(!vis[v]){
              topoSort(v,st,vis,adj);
          }
      }
      
      st.push(node);
  }

  
  
  
  
   public:
      vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){
         vector<pair<int,int>> adj[N];
         for(int i = 0; i<M; i++){
             int u = edges[i][0];
             int v = edges[i][1];
             int wt = edges[i][2];
             adj[u].push_back({v,wt});
         }
         
         stack<int> st;
         
         int vis[N] = {0};
         
         // step 1: do the topoSort
         for(int i = 0; i<N; i++){
             if(!vis[i]){
                 topoSort(i,st,vis,adj);
             }
         }
        
        // step 2:  distance thing
        vector<int> dist(N);
        for(int i = 0; i<N; i++){
            dist[i] = 1e9;
        }
        
        dist[0] = 0;
        while(!st.empty()){
        int node = st.top();
        st.pop();
        
        for(auto it: adj[node]){
            int v = it.first;
            int wt = it.second;
            
            if(dist[node] + wt < dist[v]){
                dist[v] = dist[node] + wt;
            }
            
        }
      }
      for(int i = 0; i<dist.size(); i++){
          if(dist[i] == 1e9){
              dist[i] = -1;
          }
      }
       return dist;
     }
 };
 
 
 
 */
