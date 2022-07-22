//
//  main.cpp
//  Lect-109 Painting Fence Algo DP
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
 QUESTION: NINJA AND THE FENCE
 
 LINK:  https://www.codingninjas.com/codestudio/problems/ninja-and-the-fence_3210208
 
 CODE:
 
 #define MOD 1000000007

 int add(int a, int b){
     return (a%MOD + b%MOD) % MOD;
 }

 int mul(int a, int b) {
     return ((a%MOD) *1LL * (b%MOD)) % MOD;
 }

 int solve(int n, int k){
     
     //base case
     if( n == 1 ){
         return k;
     }
     
     if(n == 2){
         return add(k,mul(k,(k-1)));
     }
     
     int ans = add(mul(solve(n-2,k),(k-1)),mul(solve(n-1,k),(k-1)));
     return ans;
 }


 //Recursion + Memoization
 int solveMem(int n, int k,vector<int> &dp){
     
     //base case
     if( n == 1 ){
         return k;
     }
     
     if(n == 2){
         return add(k,mul(k,(k-1)));
     }
     
     if(dp[n] != -1)
         return dp[n];
     
     dp[n] = add(mul(solveMem(n-2,k,dp),(k-1)), mul(solveMem(n-1,k,dp),(k-1)));
     return dp[n];
 }

 // Tabulation
 int solveTab(int n, int k){
     
     vector<int> dp(n+1,0);
     //base case
    dp[1] = k;
     
     dp[2] = add(k,mul(k,(k-1)));
     
     for(int i = 3; i<=n; i++) {
          dp[i] = add(mul(dp[i-2],k-1),mul(dp[i-1],k-1));
     }
     return dp[n];
 }


 // Space optimization
 int solveSpaceOpt(int n, int k){
     
     
     //base case
    int prev2 = k;
     
    int prev1 = add(k,mul(k,(k-1)));
     
     for(int i = 3; i<=n; i++) {
          int ans = add(mul(prev2,k-1),mul(prev1,k-1));
         prev2 = prev1;
         prev1 = ans;
     }
     return prev1;
 }




 int numberOfWays(int n, int k) {

 //     //Recursion
 //     return solve(n,k);
     
     
 //     // Recursion + Memoization
 //     vector<int> dp(n+1,-1);
 //     return solveMem(n,k,dp);
     
     
     
 //     // Tabulation
 //     return solveTab(n,k);
     
     
     //Space Optimization
     return solveSpaceOpt(n,k);
     
 }

 
 
 
 
 */
