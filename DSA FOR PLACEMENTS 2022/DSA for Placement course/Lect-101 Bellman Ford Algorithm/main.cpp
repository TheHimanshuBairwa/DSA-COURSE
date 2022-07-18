//
//  main.cpp
//  Lect-101 Bellman Ford Algorithm
//
//  Created by Himanshu Bairwa on 18/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


/*
QUESTION : BELLMAN FORD ALGO FOR FINDING SHORTEST PATH
 
 LINK:  https://www.codingninjas.com/codestudio/problems/bellmon-ford_2041977
 
 CODE:
 
 int bellmonFord(int n, int m, int src, int dest, vector<vector<int>> &edges) {
     
     vector<int> dist(n+1,1e9);
     dist[src] = 0;
     
     // n-1 times updated
     for(int i = 1; i<=n; i++){
         // traverse on edge list
         for(int j = 0; j<m; j++){
             int u = edges[j][0];
             int v = edges[j][1];
             int wt = edges[j][2];
             
             if(dist[u] != 1e9 && ((dist[u] + wt) < dist[v])){
                 dist[v] = dist[u] + wt;
             }
         }
     }
     
     // check for negative cycle
     bool flag = 0;
     for(int j = 0; j<m; j++){
             int u = edges[j][0];
             int v = edges[j][1];
             int wt = edges[j][2];
             
             if(dist[u] != 1e9 && ((dist[u] + wt) < dist[v])){
                 flag = 1;
             }
         }
     if(flag == 0){
         return dist[dest];
     }
     return -1;
     
 }
 
 
 
 
 */
