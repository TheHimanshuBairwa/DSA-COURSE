//
//  main.cpp
//  Lect-91 Topological Sort Using Kahn's Algorithm
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
 QUESTION: TOPOLOGICAL SORT USING KAHN'S ALGORITHM (USING BFS)
 
 
 LINK-->https://www.codingninjas.com/codestudio/problems/topological-sort_982938
 
 
 CODE-->
 
 #include<unordered_map>
 #include<queue>
 #include<list>

 vector<int> topologicalSort(vector<vector<int>> &edges, int v, int e)  {
     
     // create adj list
     unordered_map<int,list<int> > adj;
     for(int i = 0;i<e;i++){
         int u = edges[i][0];
         int v = edges[i][1];
         
         adj[u].push_back(v);
     }
     
     // find all indegrees of nodes
     vector<int> indegree(v);
     for(auto i: adj){
         for(auto j: i.second){
             indegree[j]++;
             
         }
     }
     
     // 0 indegree valo ko queue ke andar push kardo
     queue<int> q;
     for(int i = 0;i<v;i++) {
         if(indegree[i] == 0){
             q.push(i);
         }
     }
     
     // do BFS

     vector<int> ans;
     
     while(!q.empty()){
         int front = q.front();
         q.pop();
         
         // ans me store karlo q ke front ko
         ans.push_back(front);
         
         //neighbour ke indegree ko update karo mean decrease karo
         for(auto neighbour:adj[front]){
             indegree[neighbour]--;
             if(indegree[neighbour] == 0){
                 q.push(neighbour);
             }
         }
         
     }
     return ans;
 }
 
 
 */
