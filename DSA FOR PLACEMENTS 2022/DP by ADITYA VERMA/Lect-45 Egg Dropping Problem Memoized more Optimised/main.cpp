//
//  main.cpp
//  Lect-45 Egg Dropping Problem Memoized more Optimised
//
//  Created by Himanshu Bairwa on 13/08/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 
 QUESTION: EGG DROPPING PROBLEM
 
 LINK:  https://practice.geeksforgeeks.org/problems/egg-dropping-puzzle-1587115620/1
 
 
 CODE:
 

 class Solution
 {
     public:
     
     int solve(int e,int f, vector<vector<int>> & dp){
         if(f == 0 || f == 1){
             return f;
         }
         
         if(e == 1){
             return f;
         }
         
         if(dp[e][f] != -1){
             return dp[e][f];
         }
         
         int mini = INT_MAX;
         for(int k = 1; k <= f; k++){
             int low = 0;
             if(dp[e-1][k-1] != -1){
                 low = dp[e-1][k-1];
                 
             }else{
                 low = solve(e-1,k-1,dp);
                 dp[e-1][k-1] = low;
             }
             
             int high = 0;
             if(dp[e][f-k] != -1){
                  high = dp[e][f-k];
             }else{
                 high = solve(e,f-k,dp);
                 dp[e][f-k] = high;
             }
             
             int temp = 1 + max(low , high);
             
             // int temp = 1 + max(solve(e-1,k-1,dp) , solve(e,f-k,dp));
             mini = min(mini,temp);
         }
         
         return dp[e][f] = mini;
     }
     
     
     
     //Function to find minimum number of attempts needed in
     //order to find the critical floor.
     int eggDrop(int n, int k)
     {
         vector<vector<int>>dp(n+1,vector<int>(k+1,-1));
        return solve(n,k,dp);
     }
 };


 */
