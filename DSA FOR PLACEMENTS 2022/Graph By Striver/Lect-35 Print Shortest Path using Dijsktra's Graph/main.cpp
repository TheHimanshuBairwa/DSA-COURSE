//
//  main.cpp
//  Lect-35 Print Shortest Path using Dijsktra's Graph
//
//  Created by Himanshu Bairwa on 15/10/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION:  PRINT  Shortest Path in Weighted undirected graph USING DIJSKTRA'S
 
 LINK:  https://practice.geeksforgeeks.org/problems/shortest-path-in-weighted-undirected-graph/1
 
 CODE:
 
 class Solution {
   public:
     vector<int> shortestPath(int n, int m, vector<vector<int>>& edges) {
         
         vector<pair<int,int> > adj[n+1];
         for(auto it : edges){
             adj[it[0]].push_back({it[1],it[2]});
             adj[it[1]].push_back({it[0],it[2]});
         }
         
         
         priority_queue<pair<int,int> , vector<pair<int,int> >, greater<pair<int,int> > >pq;
         vector<int> dist(n+1, 1e9);
         vector<int> parent(n+1);
         for(int i = 1; i<=n; i++){
             parent[i] = i;
         }
         
         dist[1] = 0;
         pq.push({0,1});
         
         while(!pq.empty()){
             auto it = pq.top();
             int node = it.second;
             int dis = it.first;
             pq.pop();
             for(auto it: adj[node]){
                 int adjNode = it.first;
                 int adjW = it.second;
                 
                 if(dis + adjW < dist[adjNode]){
                     dist[adjNode] = dis + adjW;
                     pq.push({dis + adjW,adjNode});
                     parent[adjNode] = node;
                 }
             }
         }
         
         if(dist[n] == 1e9)  return {-1};
         
         vector<int> path;
         int node = n;
         while(parent[node] != node){
             path.push_back(node);
             node = parent[node];
         }
         path.push_back(1);
         reverse(path.begin(),path.end());
         return path;
     }
 };
 
 
 
 
 
 */
