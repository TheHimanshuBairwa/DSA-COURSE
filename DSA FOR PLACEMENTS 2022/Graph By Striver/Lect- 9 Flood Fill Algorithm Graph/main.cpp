//
//  main.cpp
//  Lect- 9 Flood Fill Algorithm Graph
//
//  Created by Himanshu Bairwa on 06/10/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


/*
 
 QUESTION FLOOD FILL COLOR (GRAPH)
 
 LINK: https://practice.geeksforgeeks.org/problems/flood-fill-algorithm1856/1
 
 CODE:
 
 
 class Solution {
 private:

     void dfs(int row, int col, vector<vector<int>>& ans, vector<vector<int>>& image, int newColor,
     int delRow[], int delCol[],int iniColor){
         ans[row][col] = newColor;
         int n = image.size();
         int m = image[0].size();
         
         for(int i = 0; i<4; i++){
             int nrow = row + delRow[i];
             int ncol = col + delCol[i];
             if(nrow >= 0 && nrow < n && ncol >= 0 && ncol < m
             && image[nrow][ncol] == iniColor && ans[nrow][ncol] != newColor) {
                 dfs(nrow,ncol,ans,image,newColor,delRow,delCol,iniColor);
             }
         }
     }


 public:

     vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int iniColor = image[sr][sc];
        vector<vector<int>> ans = image;
        int delRow[] = {-1,0,+1,0};
        int delCol[] = {0,+1,0,-1};
        dfs(sr,sc,ans,image,newColor,delRow,delCol,iniColor);
        return ans;
     }
 };
 
 
 
 */
