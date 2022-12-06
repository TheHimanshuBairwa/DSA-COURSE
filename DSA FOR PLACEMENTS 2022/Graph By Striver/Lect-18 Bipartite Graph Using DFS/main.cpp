//
//  main.cpp
//  Lect-18 Bipartite Graph Using DFS
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
 
 QUESTION: BIPARTITE GRAPH USING DFS
 
 LINK: https://practice.geeksforgeeks.org/problems/bipartite-graph/1
 
 CODE:
 
 class Solution {

 private:

 bool dfs(int node, int clr, int color[],vector<int>adj[] ){
     color[node] = clr;
     
     for(auto it: adj[node]){
         if(color[it] == -1){
             if(dfs(it,!clr,color,adj) == false) return false;
         }
         else if(color[it] == clr){
             return false;
         }
     }
     return true;
 }




 public:
     bool isBipartite(int V, vector<int>adj[]){
        int color[V];
        for(int i = 0; i<V; i++){
            color[i] = -1;
        }
        
        for(int i = 0; i<V; i++){
            if(color[i] == -1){
                if(dfs(i,0,color,adj) == false){
                    return false;
                }
            }
        }
            return true;
     }

 };
 
 
 
 
 
 */
