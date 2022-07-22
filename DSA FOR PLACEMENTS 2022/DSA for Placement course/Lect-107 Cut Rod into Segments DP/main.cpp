//
//  main.cpp
//  Lect-107 Cut Rod into Segments DP
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
 QUESTION : CUT INTO SEGMENTS (CODE STUDIO)
 
 LINK:  https://www.codingninjas.com/codestudio/problems/cut-into-segments_1214651
 
 CODE:
 
 #include<limits.h>

 // Recurssion
 int solve(int n, int x, int y, int z){
     // base case
     if(n == 0) {
         return 0;
     }
     
     if(n < 0){
         return INT_MIN;
     }

     int a = solve(n-x,x,y,z) + 1;
     int b = solve(n-y,x,y,z) + 1;
     int c = solve(n-z,x,y,z) + 1;
     
     int ans = max(a, max(b,c));
     return ans;

 }

 // Recurssion + Memoization
 int solveMem(int n, int x, int y, int z,vector<int> &dp){
     // base case
     if(n == 0) {
         return 0;
     }
     
     if(n < 0){
         return INT_MIN;
     }
     
     if(dp[n] != -1) {
         return dp[n];
     }

     int a = solveMem(n-x,x,y,z,dp) + 1;
     int b = solveMem(n-y,x,y,z,dp) + 1;
     int c = solveMem(n-z,x,y,z,dp) + 1;
     
     dp[n] = max(a, max(b,c));
     return dp[n];

 }


 // Tabulation
 int solveTab(int n, int x, int y, int z){
    vector<int> dp(n+1, INT_MIN);
     // agar INT_MIN ke jagah -1 lena hoto ek extra condition check karni padegi
     // if(i-x >= 0 && dp[i-x] != -1)
     
     dp[0] = 0;
     
     for(int i = 1; i<=n; i++){
         if(i-x >= 0)
             dp[i] = max(dp[i],dp[i-x]+1);
         
         if(i-y >= 0)
             dp[i] = max(dp[i],dp[i-y]+1);
         
         if(i-z >= 0)
             dp[i] = max(dp[i],dp[i-z]+1);
     }

     if(dp[n] < 0)
         return 0;
     else
         return dp[n];
 }



 int cutSegments(int n, int x, int y, int z) {
     // recursion
 //     int ans = solve(n,x,y,x);
 //     if(ans < 0)
 //         return 0;
 //     else
 //         return ans;
     
 //     // recursion + Memoization
 //     vector<int> dp(n+1,-1);
 //     int ans = solveMem(n,x,y,z,dp);
 //      if(ans < 0)
 //          return 0;
 //     else
 //         return ans;
     
     // Tabulation
     return solveTab(n,x,y,z);
     
     
     
     
     
 }
 
 
 
 */
