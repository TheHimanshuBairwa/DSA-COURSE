//
//  main.cpp
//  Lect-89 Cycle Detection in Directed Graphs
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
 QUESTION : CYCLE DETECTION IN DIRECTED GRAPHS
 
 LINK-->  https://www.codingninjas.com/codestudio/problems/detect-cycle-in-a-directed-graph_1062626
 
 CODE--> Algo using DFS
 
 #include<unordered_map>
 #include<list>

 bool checkCycleDFS(int node,unordered_map<int,bool> &visited,unordered_map<int,bool> &dfsVisited,
                  unordered_map<int,list<int> > &adj){
     visited[node] = true;
     dfsVisited[node] = true;
     
     for(auto neighbour: adj[node]){
         if(!visited[neighbour]){
             bool cycleDetected = checkCycleDFS(neighbour,visited,dfsVisited,adj);
             if(cycleDetected)
                 return true;
         }
         
             // neighbour visited hai isme to check karo
         else if(dfsVisited[neighbour]){
             return true;
         }
        
     }
     dfsVisited[node] = false;
     return false;
 }

 int detectCycleInDirectedGraph(int n, vector < pair < int, int >> & edges) {
  
     // create adj list
     unordered_map<int,list<int> > adj;
     for(int i = 0; i<edges.size();i++){
         
         int u = edges[i].first;
         int v = edges[i].second;
         
         adj[u].push_back(v);
         
     }
     
     // call dfs for all components of graph
     unordered_map<int,bool> visited;
     unordered_map<int,bool> dfsVisited;
     for(int i= 0;i<=n;i++){
         if(!visited[i]){
             bool cycleFound = checkCycleDFS(i,visited,dfsVisited,adj);
             if(cycleFound)
                 return true;
         }
     }
     return false;
 }
 
 
 --------------------------------------------------------------------------------------------------------------------------------------------------
 
 
 QUESTION: DETCT CYCLE IN DIRECTED GRAPH USING DFS
 
 LINK: https://practice.geeksforgeeks.org/problems/detect-cycle-in-a-directed-graph/1
 
 CODE: STRIVER SOLUTION
 

class Solution {
  public:
    // Function to detect cycle in a directed graph.
   
    bool checkCycle(int node, vector<int> adj[], vector<int>& visited, vector<int>& dfsvisi){
        visited[node] = 1;
        dfsvisi[node] = 1;
        
        for(auto it : adj[node]){
            if(!visited[it]){
                if(checkCycle(it,adj,visited,dfsvisi)) return true;
            }
            else if(visited[it] && dfsvisi[it]) return true;
        }
        
        dfsvisi[node] = 0;
        return false;
        
    }
   
    bool isCyclic(int V, vector<int> adj[]) {
        vector<int> visited(V,0);
        vector<int> dfsvisi(V,0);
        
        for(int i = 0; i<V; i++){
            if(!visited[i]){
                if(checkCycle(i,adj,visited,dfsvisi)) return true;
            }
        }
        return false;
    }
};

 */
