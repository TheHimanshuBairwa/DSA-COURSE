//
//  main.cpp
//  Lect-21 TopoLogical Sort Algorithm Graph
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
 
 QUESTION: TOPOLOGICAL SORT
 
 LINK: https://practice.geeksforgeeks.org/problems/topological-sort/1
 
 CODE:
 
 class Solution
 {
     private:
     void dfs(int node, vector<int> adj[], int vis[], stack<int>& s){
         vis[node] = 1;
         
         for(auto it: adj[node]){
             if(!vis[it]){
                 dfs(it,adj,vis,s);
             }
         }
         s.push(node);
     }
     
     
     public:
     //Function to return list containing vertices in Topological order.
     vector<int> topoSort(int V, vector<int> adj[])
     {
         int vis[V] = {0};
         stack<int> s;
         
         for(int i = 0; i<V; i++){
             if(!vis[i]){
                 dfs(i,adj,vis,s);
             }
         }
         
         vector<int> ans;
         while(!s.empty()){
             int top = s.top();
             s.pop();
             ans.push_back(top);
         }
         return ans;
     }
 };
 
 
 
 
 */
