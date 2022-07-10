//
//  main.cpp
//  Lect-83 BackTracking Day-2 N-Queen Problem
//
//  Created by Himanshu Bairwa on 10/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


/*
 QUESTION : N-QUEEN PROBLEM
 
 LINK-->  https://www.codingninjas.com/codestudio/problems/the-n-queens-puzzle_981286
 
 CODE -->
 
 void addSolution(vector<vector<int> > &board,vector<vector<int> > &ans,int n){
     vector<int> temp;
     for(int i = 0; i<n; i++){
         for(int j =0; j<n; j++){
             temp.push_back(board[i][j]);
         }
     }
     ans.push_back(temp);
 }

 bool isSafe(int row,int col,vector<vector<int> > &board,int n){
     int x = row;
     int y = col;
     
     // check for same row
     while(y >= 0){
         if(board[x][y] == 1){
             return false;
         }
         y--;
         
     }
     
     x = row;
     y = col;
     //check for diagonal
     while(x >= 0 && y >= 0){
         if(board[x][y] == 1){
             return false;
         }
         y--;
         x--;
         
     }
     
     x = row;
     y = col;
     //check for diagonal
     while(x < n && y >= 0){
         if(board[x][y] == 1){
             return false;
         }
         y--;
         x++;
         
     }
     return true;
 }

     
     
     
 void solve(int col , vector<vector<int> > &ans, vector<vector<int> > &board,int n){
     //base case
     if(col == n){
         addSolution(board,ans,n);
         return;
     }
     
     
     //solve 1 case for 1st col and rest recursion will take care
     for(int row = 0; row<n; row++){
         if(isSafe(row,col,board,n)) {
             // if placing queen is safe
             board[row][col] = 1;
             solve(col+1,ans,board,n);
             //backtracking for removing placed queen if further solution is not available
             board[row][col] = 0;
         }
     }
     
     
     
 }


 vector<vector<int>> nQueens(int n)
 {
     vector<vector<int> > board(n,vector<int>(n,0));
     vector<vector<int> > ans;
     
     solve(0,ans,board,n);
     
     return ans;

 }
 
 
 
 
 */
