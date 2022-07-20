//
//  main.cpp
//  Lect-103 Min cost of climbing Stairs DP
//
//  Created by Himanshu Bairwa on 20/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
QUESTION: MINIMUM COST OF CLIMBING STAIRS
 
 LINK:  https://leetcode.com/problems/min-cost-climbing-stairs/
 
 CODE:
 
 TOP_DOWN APPROACH ( RECURSION + MEMOIZATION )
 
 class Solution {
 public:
     int solve(vector<int>& cost, int n){
         // base case
         if(n == 0){
             return cost[0];
         }
         if(n==1){
             return cost[1];
         }
         
         int ans = cost[n] + min(solve(cost,n-1),solve(cost,n-2)) ;
         return ans;
     }
     
     // Top-down (recusion + Memoization)
      int solve2dp(vector<int>& cost, int n,vector<int> &dp){
         // base case
         if(n == 0){
             return cost[0];
         }
         if(n==1){
             return cost[1];
         }
         
          // step3:
          if(dp[n] != -1) {
             return dp[n];
          }
          
          
          // step 2: convertiung recursion into dp array
         dp[n] = cost[n] + min(solve2dp(cost,n-1,dp),solve2dp(cost,n-2,dp)) ;
         return dp[n];
     }
     
     int minCostClimbingStairs(vector<int>& cost) {
         
         int n = cost.size();
         // step1: make a array of DP and initialize it with -1
         vector<int> dp(n+1,-1);
         int ans = min(solve2dp(cost,n-1,dp), solve2dp(cost,n-2,dp));
         return ans;
         
         
        
 //         int n = cost.size();
 //         int ans = min(solve(cost,n-1), solve(cost,n-2));
 //         return ans;
         
         
     }
 };
 
 
 
 
 
 BOTTOM-UP APPROACH ( TABULATION )
 
 // Bottom - UP approach using TABULATION
    int solve3dp(vector<int>& cost, int n){
       
        // step1: create a 1D DP array
        vector<int> dp(n+1);
        
        // step2: analyze base case
        dp[0] = cost[0];
        dp[1] = cost[1];
        
        // step3:
        for(int i =2 ;i<n; i++){
            dp[i] = cost[i] + min(dp[i-1],dp[i-2]);
            
        }
        return min(dp[n-1],dp[n-2]);
    }
 
 
 
 int minCostClimbingStairs(vector<int>& cost) {
         
         
         // Bottom UP
         int n = cost.size();
         return solve3dp(cost,n);
     
 }
 };
 
 
 
 SPACE OPTIMIZATION APPROACH
 
 // Space optimization
     
     int solve4dp(vector<int>& cost, int n){
        
         int prev2 = cost[0];
         int prev1 = cost[1];
         
         
         for(int i =2 ;i<n; i++){
            int curr = cost[i] + min(prev1,prev2);
             prev2 = prev1;
             prev1 = curr;
             
         }
         return min(prev1,prev2);
     }
 
 int minCostClimbingStairs(vector<int>& cost) {
         
         
         // space optimization
         int n = cost.size();
         return solve4dp(cost,n);
     
 }
 };
 
 */
