//
//  main.cpp
//  Lect-105 Maximum Sum of Non-Adjacent Elements DP
//
//  Created by Himanshu Bairwa on 21/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


/*
 QUESTION : Maximum Sum of Non-Adjacent Elements DP
 
 LINK:  https://www.codingninjas.com/codestudio/problems/maximum-sum-of-non-adjacent-elements_843261
 
 CODE:
 
 int solve(vector<int>& nums, int n){
     // base case
     if(n < 0)
         return 0;
     if(n == 0)
         return nums[0];

     
     int incl = solve(nums,n-2) + nums[n];
     int excl = solve(nums,n-1) + 0;

     return max(incl,excl);


 }

 // function for Rec+memoization
 int solveRecMemo(vector<int>& nums, int n,vector<int>& dp){
     // base case
     if(n < 0)
         return 0;
     if(n == 0)
         return nums[0];

     //step3: check condition whether ans is stored in dp or not
     if(dp[n] != -1)
         return dp[n];
     
     int incl = solve(nums,n-2) + nums[n];
     int excl = solve(nums,n-1) + 0;

     // step2: store ans into dp array
     dp[n] = max(incl,excl);
     return dp[n];


 }

 // function  for tabulation
 int solveTab(vector<int>& nums){
     int n = nums.size();
     //step1: create dp array
     vector<int> dp(n,0);
     
     // step2: analyze base case and initialize
     dp[0] = nums[0];
     
     // step3: call for other remaining values
     for(int i = 1; i<n; i++) {
         int incl = dp[i-2] + nums[i];
         int excl = dp[i-1] + 0;
         dp[i] = max(incl,excl);
     }
    
     return dp[n-1];

 }


 // space optimization
 int solveSpaceOpt(vector<int>& nums){
     int n = nums.size();
     int prev2 = 0;
     int prev1 = nums[0];
     
    
     
     // step3: call for other remaining values
     for(int i = 1; i<n; i++) {
         int incl = prev2 + nums[i];
         int excl = prev1 + 0;
         int ans = max(incl,excl);
         prev2 = prev1;
         prev1 = ans;
         
             
     }
    
     return prev1;

 }



 int maximumNonAdjacentSum(vector<int> &nums){
     // recursive solution
 //     int n = nums.size();
 //     int ans = solve(nums,n-1);
 //     return ans;
     
     
 //     // Recursive + Memoization
 //     int n = nums.size();
 //     //step1: create dp array
 //     vector<int> dp(n,-1);
 //     return solveRecMemo(nums,n-1,dp);
     
     
 //     // Tabulation Method
     
 //     return solveTab(nums);
     
     // Space Optimization
     return solveSpaceOpt(nums);
     
     
     
     
 }
 
 
 
 */
