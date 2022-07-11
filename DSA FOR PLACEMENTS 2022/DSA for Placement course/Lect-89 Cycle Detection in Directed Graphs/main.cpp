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
 
 
 */
