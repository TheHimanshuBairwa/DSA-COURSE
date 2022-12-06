//
//  main.cpp
//  Lect-37 Path with Minimum Effort
//
//  Created by Himanshu Bairwa on 18/10/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


/*
 
 QUESTION : PATH WITH MINIMUM EFFORT
 
 LINK: https://practice.geeksforgeeks.org/problems/path-with-minimum-effort/1
 
 CODE:
 

 class Solution {
   public:
     int MinimumEffort(vector<vector<int>>& heights) {
         
         priority_queue<pair<int,pair<int,int>>,
         vector<pair<int,pair<int,int>>>, greater<pair<int,pair<int,int> > > >q;
         
         int n = heights.size();
         int m = heights[0].size();
         
         vector<vector<int>> dist(n,vector<int>(m,1e9));
         dist[0][0] = 0;
         q.push({0,{0,0}});
         
         int delrow[] = {-1,0,1,0};
         int delcol[]  = {0,1,0,-1};
         
         
         while(!q.empty()){
             auto it = q.top();
             q.pop();
             int diff = it.first;
             int row = it.second.first;
             int col = it.second.second;
             
             if(row == n-1 && col == m-1)    return diff;
             
             for(int i = 0; i<4; i++){
                 int newrow = row + delrow[i];
                 int newcol = col + delcol[i];
                 
                 if(newrow >= 0 && newrow < n && newcol >= 0 && newcol < m){
                     int maxEffort = max(abs(heights[row][col] - heights[newrow][newcol]),diff);
                     if(maxEffort < dist[newrow][newcol]){
                         dist[newrow][newcol] = maxEffort;
                         q.push({maxEffort,{newrow,newcol}});
                     }
                 }
             }
             
             
         }
         return -1;
         
         
     }
 };

 
 
 
 
 */
