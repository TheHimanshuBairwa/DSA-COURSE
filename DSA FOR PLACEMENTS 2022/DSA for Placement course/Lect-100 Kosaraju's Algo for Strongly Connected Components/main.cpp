//
//  main.cpp
//  Lect-100 Kosaraju's Algo for Strongly Connected Components
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
QUESTION: Count Strongly Connected Components (Kosaraju’s Algorithm)
 
 LINK:  https://www.codingninjas.com/codestudio/problems/count-strongly-connected-components-kosaraju-s-algorithm_1171151
 
 CODE:
 
 #include<unordered_map>
 #include<list>
 #include<stack>

 void dfs(int node,unordered_map<int,bool> &vis, stack<int> &st,unordered_map<int,list<int> > &adj ){

     vis[node] = true;
     for(auto nbr: adj[node]){
         if(!vis[nbr]){
             dfs(nbr,vis,st,adj);
             
         }
     }
     // topo logic
     st.push(node);
 }

 void revDfs(int node, unordered_map<int,bool> &vis,unordered_map<int,list<int> > &adj){
     vis[node] = true;
     for(auto nbr: adj[node]){
         if(!vis[nbr]){
             revDfs(nbr,vis,adj);
         }
     }
 }


 int stronglyConnectedComponents(int v, vector<vector<int>> &edges)
 {
     // adj list
     unordered_map<int,list<int> > adj;
     for(int i = 0; i< edges.size(); i++){
         int u = edges[i][0];
         int v = edges[i][1];
         
         adj[u].push_back(v);
     }
     
     // topo sort
     stack<int> st;
     unordered_map<int,bool> vis;
     for(int i = 0; i<v; i++){
         if(!vis[i]){
             dfs(i,vis,st,adj);
         }
     }
     
     // create a transpose graph
     unordered_map<int,list<int> > transpose;
     for(int i = 0 ; i<v ; i++){
         vis[i] = 0;
         for(auto nbr: adj[i]){
             transpose[nbr].push_back(i);
         }
     }
     
     // call dfs using above ordering
     int count = 0;
     while(!st.empty()){
         
         int top = st.top();
         st.pop();
         if(!vis[top]){
             count++;
             revDfs(top,vis,transpose);
         }
     }
     return count;
 }
 
 
 
 */
