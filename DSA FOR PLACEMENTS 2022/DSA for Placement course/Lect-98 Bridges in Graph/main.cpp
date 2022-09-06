//
//  main.cpp
//  Lect-98 Bridges in Graph
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
 QUESTION:  BRIDGES IN GRAPH
 
 
 LINK: https://www.codingninjas.com/codestudio/problems/bridges-in-graph_893026
 
 
 CODE:
 
 #include<unordered_map>
 #include<list>

 void dfs(int node,int parent,int &timer,vector<int> &disc,vector<int> &low,
        vector<vector<int>> &result,unordered_map<int,list<int> > &adj,
        unordered_map<int , bool> &vis){
        
        vis[node] = true;
        disc[node] = low[node] = timer++;
        
        for(auto neighbour: adj[node]){
            if(neighbour == parent){
                continue;
            }
            if(!vis[neighbour]){
               dfs(neighbour,node,timer,disc,low,result,adj,vis);
               
               // jab bi call se vapas ayenge to pehele low ko update karenge
               low[node] = min(low[node],low[neighbour]);
               
               //check if edge is bridge
               if(low[neighbour] > disc[node]){
                   vector<int> ans;
                   ans.push_back(node);
                   ans.push_back(neighbour);
                   result.push_back(ans);
       
               }
            }
            else{
                // node already visited and is not a parent
                // back edge
                low[node] = min(low[node], disc[neighbour]);
            
            }
        }
   }

     


 vector<vector<int>> findBridges(vector<vector<int>> &edges, int v, int e) {
     // adj list
     unordered_map<int,list<int> > adj;
     for(int i = 0; i<edges.size(); i++){
         int u = edges[i][0];
         int v = edges[i][1];
         
         adj[u].push_back(v);
         adj[v].push_back(u);
       
     }
     
     int timer  = 0;
     vector<int> disc(v);
     vector<int> low(v);
     int parent  = -1;
     unordered_map<int,bool> vis;

     for(int i = 0; i<v; i++){
         disc[i] = -1;
         low[i] = -1;
     }
     
     
     vector<vector<int>> result;
     // dfs
     for(int i = 0; i<v; i++){
         if(!vis[i]){
             dfs(i,parent,timer,disc,low,result,adj,vis);
         }
     }
     return result;
     
     
 }
 
 */
