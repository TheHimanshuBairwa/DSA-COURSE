//
//  main.cpp
//  Lect-15 Number of Enclaves Graph
//
//  Created by Himanshu Bairwa on 08/10/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


/*
 QUESTION: NUMBER OF ENCLAVES
 
 LINK: https://practice.geeksforgeeks.org/problems/number-of-enclaves/1
 
 CODE:
 
 class Solution {
   public:
     int numberOfEnclaves(vector<vector<int>> &grid) {
         int n = grid.size();
         int m = grid[0].size();
         queue<pair<int,int>> q;
         int vis[n][m] = {0};
         
         for(int i = 0; i<n; i++){
             for(int j = 0; j<m; j++){
                 if(i == 0 || i == n-1 || j == 0 || j == m-1){
                     if(grid[i][j] == 1){
                         q.push({i,j});
                         vis[i][j] = 1;
                     }
                 }
             }
         }
         
         int delrow[] = {-1,0,+1,0};
         int delcol[] = {0,+1,0,-1};
         
         while(!q.empty()){
             int row = q.front().first;
             int col = q.front().second;
             q.pop();
             
             for(int i = 0; i<4; i++){
                 int nrow = row + delrow[i];
                 int ncol = col + delcol[i];
                 
                 if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
                 !vis[nrow][ncol] && grid[nrow][ncol] == 1){
                     q.push({nrow,ncol});
                     vis[nrow][ncol] = 1;
                 }
                 
             }
             
         }
         int cnt = 0;
         for(int i = 0; i<n ;i++){
             for(int j =0; j<m; j++){
                 if(vis[i][j] == 0 && grid[i][j] == 1){
                     cnt++;
                 }
             }
         }
         return cnt;
         
     }
 };
 
 
 
 
 */
