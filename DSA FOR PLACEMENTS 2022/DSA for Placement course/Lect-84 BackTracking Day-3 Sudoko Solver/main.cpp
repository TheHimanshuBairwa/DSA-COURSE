//
//  main.cpp
//  Lect-84 BackTracking Day-3 Sudoko Solver
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
 QUESTION : SUDOKU SOLVER (CODE STUDIO)
 
 
 LINK-->  https://www.codingninjas.com/codestudio/problems/sudoku-solver_699919
 
 CODE-->
 
 bool isSafe(int row,int col,vector<vector<int>>& board,int value){
     for(int i = 0;i<board.size();i++) {
         // row check
         if(board[row][i] == value){
             return false;
         }
         // col check
         if(board[i][col] == value){
             return false;
         }
         
         // 3*3 matrix check
         if(board[3*(row/3) + i/3][3*(col/3) + i%3] == value){
             return false;
         }
             
     }
     return true;
 }



 bool solve(vector<vector<int>>& board){
     int n = board[0].size();
     
     for(int row=0;row<n;row++){
         for(int col=0;col<n;col++){
             
             //cell empty
             if(board[row][col] == 0){
                for(int val = 0; val<=9; val++){
                    if(isSafe(row,col,board,val)){
                         board[row][col] = val;
                 
                         // recursive call
                         bool furtherAnsPossible = solve(board);
                             if(furtherAnsPossible){
                                 return true;
                             }
                             else{
                             //backtrack
                     
                                   board[row][col] = 0;
                             }
                        }
                     }
                 return false;
             }
         }
     }
     return true;
 }





 void solveSudoku(vector<vector<int>>& sudoku)
 {
     solve(sudoku);
 }
 
 
 
 
 */
