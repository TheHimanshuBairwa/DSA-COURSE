//
//  main.cpp
//  Lect-7 Number of Provinces
//
//  Created by Himanshu Bairwa on 06/10/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION : Number of Provinces 
 
 LINK: https://practice.geeksforgeeks.org/problems/number-of-provinces/1
 
 CODE:
 
 class Solution {
   public:
     void dfs(vector<int>adjlist[],int v,vector<bool>&vis){
         vis[v]=true;
         
         for(auto neighbor : adjlist[v]){
             if(vis[neighbor]==false){
                 dfs(adjlist,neighbor,vis);
             }
         }
         return;
     }
   
     int numProvinces(vector<vector<int>> adj, int V) {
         
     
         // converting adj matrix to adj list
         vector<int> adjls[V+1];
         for(int i = 0; i<V; i++){
             for(int j = 0; j<V; j++){
                 if(adj[i][j] == 1 && i != j){
                     adjls[i+1].push_back(j+1);
                     adjls[j+1].push_back(i+1);
                     
                 }
             }
         }
         
         vector<bool>vis(V+1,false);
         int count=0;
         for(int i=1;i<=V;i++){
             if(vis[i]==false){
                 count++;
                 dfs(adjls,i,vis);
             }
         }
         
         return count;
     }
 };
 
 
 */
