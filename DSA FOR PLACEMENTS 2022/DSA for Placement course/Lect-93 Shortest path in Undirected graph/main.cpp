//
//  main.cpp
//  Lect-93 Shortest path in Undirected graph
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
 QUESTION: FIND SHORTEST PATH IN UNDIRECTED GRAPH (USING BFS)
 
 LINK-->  https://www.codingninjas.com/codestudio/problems/shortest-path-in-an-unweighted-graph_981297
 
CODE-->
 
 #include<unordered_map>
 #include<list>
 #include<queue>



 vector<int> shortestPath( vector<pair<int,int>> edges , int n , int m, int s , int t){

     // create adjacency list
     unordered_map<int, list<int> > adj;
     for(int i =0 ;i< edges.size(); i++){
         int u = edges[i].first;
         int v = edges[i].second;
         
         adj[u].push_back(v);
         adj[v].push_back(u);
         
     }
     
     // do bfs
     unordered_map<int,bool> visited;
     unordered_map<int,int> parent;
     queue<int> q;
     q.push(s);
     visited[s] = true;
     parent[s] = -1;
     
     while(!q.empty()){
         int front = q.front();
         q.pop();
         
         for(auto i:adj[front]){
             if(!visited[i]){
                 visited[i] = true;
                 parent[i] = front;
                 q.push(i);
             }
         }
     }
     
     // prepare shortest path
     vector<int> ans;
     int currentNode = t;
     ans.push_back(currentNode);
     
     while(currentNode != s){
         currentNode = parent[currentNode];
         ans.push_back(currentNode);
     }
     /*  yaha reverse isliye liya bcoz humne destination se parent ko track kiya tha to humara
     shortest path destination to source bana but ans me to source to destination dena hai
     so humne ans ko reverse kar diya   */
/*
    // RETURNING ANS AFTER REVERSING
 
     reverse(ans.begin(),ans.end());
     return ans;
 }

 
 
 
 
 
 */
