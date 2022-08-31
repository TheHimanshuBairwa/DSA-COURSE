//
//  main.cpp
//  Lect-92 Cycle Detection in Directed Graph using BFS(kahn's algorithm)
//
//  Created by Himanshu Bairwa on 11/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


/*
 QUESTION: CYCLE DETECTION IN DIRECTED GRAPH USING KAHN'S ALGORITHM(USING BFS)
 
 
 LINK-->  https://www.codingninjas.com/codestudio/problems/detect-cycle-in-a-directed-graph_1062626
 
 
 CODE-->
 
 #include<unordered_map>
 #include<list>
 #include<queue>

 int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
     
     // create adj list
     unordered_map<int,list<int> > adj;
     for(int i = 0;i<edges.size();i++){
         int u = edges[i].first - 1;
         int v = edges[i].second - 1;
         
         adj[u].push_back(v);
     }
     
     // find all indegrees of nodes
     vector<int> indegree(n);
     for(auto i: adj){
         for(auto j: i.second){
             indegree[j]++;
             
         }
     }
     
     // 0 indegree valo ko queue ke andar push kardo
     queue<int> q;
     for(int i = 0;i<n;i++) {
         if(indegree[i] == 0){
             q.push(i);
         }
     }
     
     // do BFS

     int cnt = 0;
     
     while(!q.empty()){
         int front = q.front();
         q.pop();
         
         // increase count
             cnt++;
         
         //neighbour ke indegree ko update karo mean decrease karo
         for(auto neighbour:adj[front]){
             indegree[neighbour]--;
             if(indegree[neighbour] == 0){
                 q.push(neighbour);
             }
         }
         
     }
     if(cnt == n){
         return false;
     }else{
         return true;
     }
   
 }


-----------------------------------------------------------------------------------------------------------------------------------------------------


class Solution {
  public:
    // Function to detect cycle in a directed graph.
    bool isCyclic(int V, vector<int> adj[]) {
        queue<int> q;
        vector<int> indegre(V,0);
        for(int i = 0; i<V; i++){
            for(auto it : adj[i]){
                indegre[it]++;
            }
        }
        
        for(int i = 0; i<V; i++){
            if(indegre[i] == 0){
                q.push(i);
            }
        }
        
        
        int cnt = 0;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            cnt++;
            
            for(auto neighbour : adj[node]){
                indegre[neighbour]--;
                if(indegre[neighbour] == 0){
                    q.push(neighbour);
                }
            }
        }
        
        if(cnt == V)    return false;
        else    return true;
        
        
        
        
        
        
    }
};




 
 */
