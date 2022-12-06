//
//  main.cpp
//  Lect-23 Detect cycle in directed Graph
//
//  Created by Himanshu Bairwa on 11/10/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION : Detect cycle in Directed Graph
 
 LINK:  https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
 
 CODE:
 
 NOTE--> Instead of storing topo sort in array we can use just a cnt varaible and replaace it with array lines
 
 
 
 class Solution {
   public:
     // Function to detect cycle in a directed graph.
     bool isCyclic(int V, vector<int> adj[]) {
        int indegree[V] = {0};
        for(int i = 0; i<V; i++){
            for(auto it: adj[i]){
                indegree[it]++;
            }
        }
        
        
        queue<int> q;
        for(int i = 0; i<V; i++){
            
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        
        vector<int> ans;
        while(!q.empty()){
            int node = q.front();
            ans.push_back(node);
            q.pop();
            for(auto it : adj[node]){
                indegree[it]--;
                if(indegree[it] == 0){
                    q.push(it);
                }
            }
        }
        
        if(ans.size() < V) return true;
        
        return false;
        
     }
 };
 
 
 
 
 */
