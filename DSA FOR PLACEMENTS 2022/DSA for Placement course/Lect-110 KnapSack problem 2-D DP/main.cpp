//
//  main.cpp
//  Lect-110 KnapSack problem 2-D DP
//
//  Created by Himanshu Bairwa on 22/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION : 0 1 KNAPSACK
 
 LINK:   https://www.codingninjas.com/codestudio/problems/0-1-knapsack_920542
 
 CODE:
 
 // Recursive solution
 int solve(vector<int>& weight, vector<int>& value, int index, int capacity) {
     // base case
     // if only one item to steal then just check weight with knapsack capacity
    if(index == 0){
        if(weight[0] <= capacity)
         return value[0];
     else
         return 0;
    }
     
     
     int include = 0;
     if(weight[index] <= capacity)
         include = value[index] + solve(weight, value, index-1, capacity - weight[index]);
     
     int exclude = 0 + solve(weight, value, index-1, capacity);
     
     int ans = max(exclude, include);
     return ans;
 }


 // Recursion + Memoization
 int solveMem(vector<int>& weight, vector<int>& value, int index, int capacity, vector<vector<int>>& dp) {
     // base case
     // if only one item to steal then just check weight with knapsack capacity
    if(index == 0){
        if(weight[0] <= capacity)
         return value[0];
     else
         return 0;
    }
     
     if(dp[index][capacity] != -1)
         return dp[index][capacity];
     
     int include = 0;
     if(weight[index] <= capacity)
         include = value[index] + solveMem(weight, value, index-1, capacity - weight[index], dp);
     
     int exclude = 0 + solveMem(weight, value, index-1, capacity, dp);
     
     dp[index][capacity] = max(exclude, include);
     return dp[index][capacity];
 }


 // Tabulation
 int solveTab(vector<int>& weight, vector<int>& value, int n, int capacity) {
     
     // step1: create dp array
     vector<vector<int>>dp(n,vector<int>(capacity+1,0));
     
     //step2: ana;yze base case
     for(int w = weight[0]; w<=capacity; w++) {
         if(weight[0] <= capacity)
             dp[0][w] = value[0];
         else
             dp[0][w] = 0;
     }
     
     // step3 : covert recursive call into dp array form
     for(int index = 1; index<n; index++){
         for(int w = 0; w<=capacity; w++){
             int include = 0;
             if(weight[index] <= w)
                 include = value[index] + dp[index-1][w - weight[index]];
     
             int exclude = 0 + dp[index-1][w];
     
           dp[index][w] = max(exclude, include);
        
         }
     }
     return dp[n-1][capacity];
 }
  

 // Space Optimization

 int solveSpaceOpt(vector<int>& weight, vector<int>& value, int n, int capacity) {
     
     // step1: create 2 rows
     vector<int> prev(capacity+1,0);
     vector<int> curr(capacity+1,0);
     
     //step2: ana;yze base case
     for(int w = weight[0]; w<=capacity; w++) {
         if(weight[0] <= capacity)
             prev[w] = value[0];
         else
             prev[w] = 0;
     }
     
     // step3 : covert recursive call into dp array form
     for(int index = 1; index<n; index++){
         for(int w = 0; w<=capacity; w++){
             int include = 0;
             if(weight[index] <= w)
                 include = value[index] + prev[w - weight[index]];
     
             int exclude = 0 + prev[w];
     
           curr[w] = max(exclude, include);
        
         }
         prev = curr;
     }
     return prev[capacity];
 }


 // More Optimized using singe array curr
 // Space Optimization

 int solveSpaceOptMore(vector<int>& weight, vector<int>& value, int n, int capacity) {
     
     // step1: create 2 rows
 //     vector<int> prev(capacity+1,0);
     vector<int> curr(capacity+1,0);
     
     //step2: ana;yze base case
     for(int w = weight[0]; w<=capacity; w++) {
         if(weight[0] <= capacity)
             curr[w] = value[0];
         else
             curr[w] = 0;
     }
     
     // step3 : covert recursive call into dp array form
     for(int index = 1; index<n; index++){
         for(int w = capacity; w>=0; w--){
             int include = 0;
             if(weight[index] <= w)
                 include = value[index] + curr[w - weight[index]];
     
             int exclude = 0 + curr[w];
     
           curr[w] = max(exclude, include);
        
         }
        
     }
     return curr[capacity];
 }




 int knapsack(vector<int> weight, vector<int> value, int n, int maxWeight)
 {
 //     //Recursive solution
 //     return solve(weight,value,n-1,maxWeight);
     
     
 //     // Recursive + Memoization
 //     vector<vector<int> >dp(n, vector<int>(maxWeight+1,-1));
 //     return solveMem(weight, value, n-1, maxWeight,dp);

 //     // Tabulation
 //     return solveTab(weight,value,n,maxWeight);
     
     
 //     // Space optimization
 //     solveSpaceOpt(weight,value,n,maxWeight);
     
     
     //more space optimized
     solveSpaceOptMore(weight,value,n,maxWeight);




 }
 
 
 */
