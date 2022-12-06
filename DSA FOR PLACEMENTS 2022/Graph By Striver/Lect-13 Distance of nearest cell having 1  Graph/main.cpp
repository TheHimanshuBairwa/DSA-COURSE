//
//  main.cpp
//  Lect-13 Distance of nearest cell having 1  Graph
//
//  Created by Himanshu Bairwa on 07/10/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 
 QUESTION: Distance of nearest cell having 1
 
 LINK: https://practice.geeksforgeeks.org/problems/distance-of-nearest-cell-having-1-1587115620/1
 
 CODE:
 
 class Solution
 {
     public:
     //Function to find distance of nearest 1 in the grid for each cell.
     vector<vector<int>>nearest(vector<vector<int>>grid)
     {
         int n = grid.size();
         int m = grid[0].size();
         vector<vector<int>> vis(n,vector<int>(m,0));
         vector<vector<int>> dist(n,vector<int>(m,0));
         queue<pair<pair<int,int>,int>> q;
         
         for(int i = 0; i<n; i++){
             for(int j = 0; j<m; j++){
                 if(grid[i][j] == 1){
                     q.push({{i,j},0});
                     vis[i][j] = 1;
                 }else{
                     vis[i][j] = 0;
                 }
             }
         }
         
         while(!q.empty()){
             int row = q.front().first.first;
             int col = q.front().first.second;
             int steps = q.front().second;
             q.pop();
             dist[row][col] = steps;
             
             int delrow[] = {-1,0,1,0};
             int delcol[] = {0,1,0,-1};
             
             for(int i = 0; i<4; i++){
                 int nrow = row + delrow[i];
                 int ncol = col + delcol[i];
                 if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m
                 && vis[nrow][ncol] == 0){
                     vis[nrow][ncol] = 1;
                     q.push({{nrow,ncol},steps+1});
                 }
             }
             
         }
         return dist;
         
     }
 };
 
 
 
 */
