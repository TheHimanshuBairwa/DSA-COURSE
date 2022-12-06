//
//  main.cpp
//  Lect-10 Rotten Oranges Graph
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
 
 QUESTION : Rotten Oranges
 
 LINK: https://practice.geeksforgeeks.org/problems/rotten-oranges2536/1
 
 CODE:
 

 class Solution
 {
     public:
     //Function to find minimum time required to rot all oranges.
     int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
     //   {{r,c},t}
        queue<pair<pair<int,int>,int>> q;
        vector<vector<int>> vis(n,vector<int>(m));
        
        for(int i = 0; i<n; i++){
            for(int j = 0; j<m; j++){
                if(grid[i][j] == 2){
                    q.push({{i,j},0});
                    vis[i][j] = 2;
                }else{
                    vis[i][j] = 0;
                }
            }
        }
        
        int maxTime = 0;
        int drow[] = {-1,0,+1,0};
        int dcol[] = {0,+1,0,-1};
        
        while(!q.empty()){
            int r = q.front().first.first;
            int c = q.front().first.second;
            int t = q.front().second;
            maxTime = max(t,maxTime);
            q.pop();
            for(int i = 0; i<4; i++){
                int nrow = r + drow[i];
                int ncol = c + dcol[i];
                if(nrow >= 0 && nrow < n && ncol >=0 && ncol < m
                && vis[nrow][ncol] == 0 && grid[nrow][ncol] == 1){
                    q.push({{nrow,ncol},t+1});
                    vis[nrow][ncol] = 2;
                    
                }
            }
                            
        }
     
     for(int i =0 ; i<n; i++){
         for(int j = 0; j<m; j++){
             if(vis[i][j] != 2 && grid[i][j] == 1) return -1;
         }
     }
     return maxTime;
     }
 };
 
 */
