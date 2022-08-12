//
//  main.cpp
//  Lect-34 Matrix chain multiplication Recursive
//
//  Created by Himanshu Bairwa on 10/08/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 
 QUESTION: MATRIX CHAIN MULTIPLICATION
 
 LINK : https://practice.geeksforgeeks.org/problems/matrix-chain-multiplication0303/1
 
 
 CODE:
 
 RECURSIVE CODE:
 
 class Solution{
 public:

     int solve(int arr[], int i, int j){
         // base condition
         if(i >= j){
             return 0;
         }
         
         int mini = INT_MAX;
         
         for(int k = i; k<=j-1; k++){
             int tempAns = solve(arr,i,k) + solve(arr,k+1,j) + arr[i-1] * arr[k] * arr[j];
             
             if(tempAns < mini){
                 mini = tempAns;
             }
             
         }
         return mini;
     }
     
     int matrixMultiplication(int N, int arr[])
     {
         return solve(arr,1,N-1);
     }
 };

 /////////////////////////////////////////////
 
 TOP-DOWN APPROACH / RECURSION + MEMOIZATION CODE  : LECT-35
 
 
 int solveMem(int arr[], int i, int j, vector<vector<int>> &dp){
         // base condition
         if(i >= j){
             return 0;
        }
        
        if(dp[i][j] != -1){
            return dp[i][j];
        }
         
         int mini = INT_MAX;
         
         for(int k = i; k<=j-1; k++){
             int tempAns = solveMem(arr,i,k,dp) + solveMem(arr,k+1,j,dp) + arr[i-1] * arr[k] * arr[j];
             
             mini = min(mini,tempAns);
             
         }
         return dp[i][j] = mini;
     }
     
 
 
 */
