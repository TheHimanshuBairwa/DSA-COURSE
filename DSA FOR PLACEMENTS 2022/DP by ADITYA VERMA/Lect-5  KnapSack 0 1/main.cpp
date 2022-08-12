//
//  main.cpp
//  Lect-5  KnapSack 0 1
//
//  Created by Himanshu Bairwa on 28/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
QUESTION: 0 1 KNAPSACK PROBLEM
 
 LINK: https://practice.geeksforgeeks.org/problems/0-1-knapsack-problem0945/1
 
 CODE:
 
-----------> RECRUSIVE CODE
 
 int rec(int W, int wt[], int val[], int n){
         // recursive solution
        // base case
        if(W == 0 || n == 0){
            return 0;
        }
        
        if(wt[n-1] <= W){
            return max(val[n-1] + knapSack(W-wt[n-1],wt,val,n-1),knapSack(W,wt,val,n-1));
        }
        else{
            return knapSack(W,wt,val,n-1);
        }
     }
 
 
--------------> TOP-DOWN APPROACH OR RECURSION + MEMOIZATION
 
 int recMem(int W, int wt[], int val[], int n,vector<vector<int>> &dp){
         // recursive solution
        // base case
        if(n == 0 || W == 0){
            return 0;
        }
        
        if(dp[n][W] != -1){
            return dp[n][W];
        }
        
        if(wt[n-1] <= W){
            dp[n][W] =  max(val[n-1] + recMem(W-wt[n-1],wt,val,n-1,dp),recMem(W,wt,val,n-1,dp));
        }
        else{
           dp[n][W] = recMem(W,wt,val,n-1,dp);
        }
        
        return dp[n][W];
     }
 
 STEP1: CREATION OF DP VECTOR OUT OF THE FUNCTION
 
 // rec + Memo
 vector<vector<int> >dp((n+1), vector<int>((W+1),-1));
 
 return recMem(W,wt,val,n,dp);
 
 
 --------->   BOTTOM UP APPROACH OR TABULATION
 
 int tab(int W, int wt[], int val[], int n){
        vector<vector<int> >dp((n+1), vector<int>((W+1)));
        
        for(int i = 0; i<n+1; i++){
            for(int j = 0; j<W+1; j++){
                if(i == 0 || j == 0){
                    dp[i][j] = 0;
                }
            }
        }
        
        for(int i = 1; i<n+1; i++){
            for(int j = 1; j<W+1; j++){
                if(wt[i-1] <= j){
                    dp[i][j] = max(val[i-1] + dp[i-1][j-wt[i-1]], dp[i-1][j]);
                }
                else{
                    dp[i][j] = dp[i-1][j];
                }
            }
        }
        
        return dp[n][W];
        
    }
 
 
 */
