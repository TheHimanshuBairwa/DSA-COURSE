//
//  main.cpp
//  Lect-24 Prerequisite task I & II
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
 QUESTION 1: PREREQUISITE TASK
 
 LINK: https://practice.geeksforgeeks.org/problems/prerequisite-tasks/1
 
 CODE:
 
 class Solution {
 public:
     bool isPossible(int V, vector<pair<int, int> >& prerequisites) {
         vector<int> adj[V];
         for(auto it : prerequisites){
             adj[it.first].push_back(it.second);
         }
         
         
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
        
        int cnt = 0;
        while(!q.empty()){
            int node = q.front();
            cnt++;
            q.pop();
            for(auto it : adj[node]){
                indegree[it]--;
                if(indegree[it] == 0){
                    q.push(it);
                }
            }
        }
        
        if(cnt == V) return true;
        
        return false;
     }
 };
 
 
 
 */


/*
 
 QUESTION 2: Course Schedule
 
 LINK:  https://practice.geeksforgeeks.org/problems/course-schedule/1
 
 CODE:
 
 class Solution
 {
   public:
     vector<int> findOrder(int V, int m, vector<vector<int>> prerequisites)
     {
        vector<int> adj[V];
         for(auto it : prerequisites){
             adj[it[1]].push_back(it[0]);
         }
         
         
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
        
        vector<int> ans;
        while(!q.empty()){
            int node = q.front();
            ans.push_back(node);
            q.pop();
            for(auto it : adj[node]){
                indegree[it]--;
                if(indegree[it] == 0){
                    q.push(it);
                }
            }
        }
        
        if(ans.size() == V) return ans;
        else return {};
        
        
        
     }
 };
 
 
 */
