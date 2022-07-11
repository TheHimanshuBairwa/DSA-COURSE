//
//  main.cpp
//  Lect-85 Introduction to Graphs ans its Implementation
//
//  Created by Himanshu Bairwa on 11/07/22.
//

#include <iostream>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>

class graph{
public:
    unordered_map<T, list<T> > adj;
    
    
    void addEdge(T u, T v, bool direction){
        // direction = 0 -> undirected Graph
        // direction = 1 -> directed Graph
    
    // create an edge from u to v
        adj[u].push_back(v);
        
        if(direction == 0){
            adj[v].push_back(u);
        }
    }
    
    void printAdjList(){
            for(auto i : adj){
                cout<<i.first<<"->";
                for(auto j: i.second){
                    cout<<j<<",";
                }
                cout<<endl;
            }
                
        }
    
    
    
    
};



int main() {
    
    int n;
    cout<<"enter the value of nodes"<<endl;
    cin>>n;
    
    int m;
    cout<<"enter the value of edges"<<endl;
    cin>>m;
    
    graph<int> g;
    
    for(int i =0;i<m; i++){
        int u,v;
        cin>>u>>v;
        
        // creating undirected graph
        g.addEdge(u,v,0);
        
    }
    
    // printing the graph
    g.printAdjList();
    
    return 0;
}



/*
 QUESTION: CREATING AND PRINTING GRAPH (USING VECTOR NOT MAP)
 
 LINK-->  https://www.codingninjas.com/codestudio/problems/create-a-graph-and-print-it_1214551
 
 CODE-->
 
 vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
     
     vector<int> ans[n];
 
     // ans array will store all adjacent nodes corresponding indexes
     for(int i = 0; i<m; i++){
         int u = edges[i][0];
         int v = edges[i][1];
         
         ans[u].push_back(v);
         ans[v].push_back(u);
         
     }
     
     vector<vector<int> > adj(n);
     for(int i= 0; i<n; i++){
         adj[i].push_back(i);
         
         //entering neighbours
         for(int j = 0; j < ans[i].size(); j++){
             adj[i].push_back(ans[i][j]);
         }
      }
     return adj;
 }
  
 
 
 
 
 TESTCASE I/P
 1
 4 3            4->NODES, 3->EDGES
 1 2            1 CONNECTED TO 2
 0 3            0 CONNECTED TO 3
 2 3            2 CONNECTED TO 3
 
 
 O/P -> ADJACENCY LIST
 0 3            O CONNECTED TO 3
 1 2            1 CONNECTED TO 2
 2 1 3          2 CONNECTED TO 1,3
 3 0 2          3 CONNCECTED TO 0,2
 
 
 
 */
