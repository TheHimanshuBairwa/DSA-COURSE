//
//  main.cpp
//  Lect-17 Bipartite Graph
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
 QUESTION: Bipartite Graph
 
 LINK:  https://practice.geeksforgeeks.org/problems/bipartite-graph/1
 
 CODE:
 
 class Solution {

 // if color are components or graph is note connected
 private:
 bool check(int start, int V, vector<int> adj[], int color[]){
     
      queue<int> q;
      q.push(start);
      color[start] = 0;
         
         
         
         
         
         while(!q.empty()){
            int  node = q.front();
            q.pop();
            
             for(auto it: adj[node]){
                 // if adjacent node is not ye colored
                 // you will give the oppiste color to node
                 if(color[it] == -1){
                     color[it] = !color[node];
                     q.push(it);
                 }
                 
                 // adjacent guy having same color
                 // someone colored in their path
                 else if(color[it] == color[node]){
                     return false;
                 }
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
                if(check(i,V,adj,color) == false){
                    return false;
                }
            }
        }
        return true;
     }

 };
 
 
 
 
 
 */
