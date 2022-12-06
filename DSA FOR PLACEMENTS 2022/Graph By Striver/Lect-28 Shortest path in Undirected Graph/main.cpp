//
//  main.cpp
//  Lect-28 Shortest path in Undirected Graph
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
 QUESTION: FIND SHORTEST PATH IN UNDIRECTED GRAPH USING BFS
 
 LINK:  https://practice.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1
 
 CODE:
 
 class Solution {
   public:
     vector<int> shortestPath(vector<vector<int>>& edges, int N,int M, int src){
        vector<int> adj[N];
        for(int i = 0; i<M; i++){
            int u = edges[i][0];
            int v = edges[i][1];
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        
        vector<int> dist(N,INT_MAX);
        dist[src] = 0;
        queue<int> q;
        q.push(src);
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(auto it : adj[node]){
                
                
                if(dist[node] + 1 < dist[it]){
                    dist[it] = dist[node] + 1;
                    q.push(it);
                }
            }
        }
        
        for(int i = 0; i<N; i++){
            if(dist[i] == INT_MAX){
                dist[i] = -1;
            }
        }
        return dist;
        
     }
 };
 
 
 
 */
