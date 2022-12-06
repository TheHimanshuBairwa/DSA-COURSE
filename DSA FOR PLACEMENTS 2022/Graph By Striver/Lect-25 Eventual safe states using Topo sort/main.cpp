//
//  main.cpp
//  Lect-25 Eventual safe states using Topo sort
//
//  Created by Himanshu Bairwa on 13/10/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION: EVENTUAL SAFE STATES USING TOPO SORT
 
 LINK:  https://practice.geeksforgeeks.org/problems/eventual-safe-states/1
 
 CODE:
 
 class Solution {
   public:
     vector<int> eventualSafeNodes(int V, vector<int> adj[]) {
        vector<int> adjRev[V];
        int indegres[V] = {0};
        
        for(int i = 0; i<V; i++){
            for(auto it: adj[i]){
                // i --> it
                // reverse =  it --> i
                adjRev[it].push_back(i);
                indegres[i]++;
            }
        }
        
        queue<int> q;
        for(int i = 0; i<V; i++){
            if(indegres[i] == 0){
                q.push(i);
            }
        }
        
        vector<int> safeNodes;
        while(!q.empty()){
            int node = q.front();
            q.pop();
            safeNodes.push_back(node);
            for(auto it : adjRev[node]){
                indegres[it]--;
                if(indegres[it] == 0){
                    q.push(it);
                }
            }
        }
        
       sort(safeNodes.begin(), safeNodes.end());
       return safeNodes;
     }
 };

 
 
 
 */
