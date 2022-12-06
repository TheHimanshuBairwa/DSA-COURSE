//
//  main.cpp
//  Lect-14 Surrounded Region Graph
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
 
 
 
 QUESTION: CONVERT ALL O's TO X's
 
 LINK: https://practice.geeksforgeeks.org/problems/replace-os-with-xs0052/1
 
 CODE:
 
 class Solution{

 private:
 void dfs(int row, int col, vector<vector<int>> &vis,  vector<vector<char>> &mat){
     vis[row][col] = 1;
     
     // check for top right bottom left
     int delrow[] = {-1,0,+1,0};
     int delcol[] = {0,+1,0,-1};
     int n = mat.size();
     int m = mat[0].size();
     
     
     for(int i = 0; i<4; i++){
         int nrow = row + delrow[i];
         int ncol = col + delcol[i];
         
         if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m &&
         !vis[nrow][ncol] && mat[nrow][ncol] == 'O'){
             dfs(nrow,ncol,vis,mat);
         }
     }
 }



 public:
     vector<vector<char>> fill(int n, int m, vector<vector<char>> mat)
     {
         vector<vector<int>> vis(n,vector<int>(m,0));
         
         // first ans the last row
         for(int j = 0; j<m; j++){
             // first row
             if(!vis[0][j] && mat[0][j] == 'O'){
                 dfs(0,j,vis,mat);
             }
             
             // last row
             if(!vis[n-1][j] && mat[n-1][j] == 'O'){
                 dfs(n-1,j,vis,mat);
             }
         }
         
         // first column and first row
         for(int i = 0; i<n; i++){
             
             // first column
             if(!vis[i][0] && mat[i][0] == 'O'){
                 dfs(i,0,vis,mat);
             }
             
             // last column
             if(!vis[i][m-1] && mat[i][m-1] == 'O'){
                 dfs(i,m-1,vis,mat);
             }
         }
         
         for(int i = 0; i<n; i++){
             for(int j = 0; j<m; j++){
                 if(!vis[i][j] && mat[i][j] == 'O'){
                     mat[i][j] = 'X';
                 }
             }
         }
         return mat;
     }
 };
 */
