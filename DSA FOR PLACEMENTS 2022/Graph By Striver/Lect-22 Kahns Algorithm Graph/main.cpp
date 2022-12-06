//
//  main.cpp
//  Lect-22 Kahns Algorithm Graph
//
//  Created by Himanshu Bairwa on 11/10/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 
 QUESTION : KAHN'S ALGIRTHM
 
 LINK:  https://practice.geeksforgeeks.org/problems/topological-sort/1
 
 CODE:
 
 class Solution
 {
     public:
     //Function to return list containing vertices in Topological order.
     vector<int> topoSort(int V, vector<int> adj[])
     {
         int indegree[V] = {0};
         for(int i = 0; i<V; i++){
             for(auto it: adj[i]){
                 indegree[it]++;
             }
         }
         
         
         queue<int> q;
         for(int i = 0; i<V; i++){
             if(indegree[i] == 0){
                 q.push(i);
             }
         }
         
         vector<int> topo;
         while(!q.empty()){
             
             int front = q.front();
             q.pop();
             topo.push_back(front);
             
             // now node is in your topo sort so
             // we can remove that edge from indegree
             
             for(auto it: adj[front]){
                 indegree[it]--;
                 if(indegree[it] == 0){
                     q.push(it);
                 }
             }
         }
         
         return topo;
         
     }
 };
 
 
 
 
 
 */
