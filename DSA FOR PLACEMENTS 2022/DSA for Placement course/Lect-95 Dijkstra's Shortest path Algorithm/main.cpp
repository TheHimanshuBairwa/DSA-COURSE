//
//  main.cpp
//  Lect-95 Dijkstra's Shortest path Algorithm
//
//  Created by Himanshu Bairwa on 12/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
  QUESTION : FIND SHORTEST PATH IN DAG WITH ALL NODES USING DIJKSTRA'S ALGORITHM
            (ek source node baki sari nodes ka distance nikalna hai using dijsktra's algo)
  
  
  
 
 LINK-->  https://www.codingninjas.com/codestudio/problems/dijkstra-s-shortest-path_920469
 
 CODE-->
 
 
 #include<unordered_map>
 #include<set>
 #include<list>

 vector<int> dijkstra(vector<vector<int>> &vec, int vertices, int edges, int source) {
     unordered_map<int, list<pair<int,int> > > adj;
     for(int i = 0; i<edges; i++) {
         int u = vec[i][0];
         int v = vec[i][1];
         int w = vec[i][2];
         
         adj[u].push_back(make_pair(v,w));
         adj[v].push_back(make_pair(u,w));
     }
     
     // creation of distance array with infinite value initially
     vector<int> dist(vertices);
     for(int i = 0; i< vertices; i++) {
         dist[i] = INT_MAX;
          }
     
     // creation of set on basis (distance , node)
     set<pair<int,int> > st;
     
     //intialise distance and set with source node
     dist[source] = 0;
     st.insert(make_pair(0,source));
     while(!st.empty()){
         
         // fetch top record
         auto top = *(st.begin());
         int nodeDistance = top.first;
         int topNode = top.second;
         
         // remove from top record now
         st.erase(st.begin());
         
         // traverse on neighbour
         for(auto neighbour: adj[topNode]) {
             if(nodeDistance + neighbour.second < dist[neighbour.first]){
                 
                 auto record  = st.find(make_pair(dist[neighbour.first],neighbour.first));
                 
                 // if record found then erase it
                 if(record != st.end()) {
                     st.erase(record);
                 }
                 
                 // update distance
                 dist[neighbour.first] = nodeDistance + neighbour.second;
                 // record push in set
                 st.insert(make_pair(dist[neighbour.first],neighbour.first));
             }
         }
     }
     
     return dist;
      
 }

 
 */
