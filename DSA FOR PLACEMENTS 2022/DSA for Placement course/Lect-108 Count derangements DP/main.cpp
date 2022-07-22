//
//  main.cpp
//  Lect-108 Count derangements DP
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
 QUESTION: COUNT DERAGEMENTS
 
 LINK:  https://www.codingninjas.com/codestudio/problems/count-derangements_873861
 
 
 CODE:
 
 #define MOD 1000000007
 #include<vector>

 // recursion + Memoization
 long long int solveMem(int n, vector<long long int> &dp){
     
      // base case
     if(n == 1)
         return 0;
     if(n == 2)
         return 1;
     
     if(dp[n] != -1)
         return dp[n];
     
     dp[n] = (((n-1)%MOD) * ((solveMem(n-1,dp)%MOD) + (solveMem(n-2,dp)%MOD)) % MOD);
     return dp[n];
     
 }

 // Tabulation
 long long int solveTab(int n){
     vector<long long int> dp(n+1,0);
     dp[1] = 0;
     dp[2] = 1;
     
     for(int i= 3; i<=n; i++){
         long long int first = dp[i-1] % MOD;
         long long int second = dp[i-2] % MOD;
         long long int sum  = (first + second) % MOD;
         
         long long int ans = ((i-1) * sum) % MOD;
         dp[i] = ans;
     }
     
     return dp[n];
     
 }


 // Space optimiation

 long long int solveSpaceOpt(int n){
    
     long long int prev2 = 0;
     long long int prev1 = 1;
     
     for(int i= 3; i<=n; i++){
         long long int first = prev1 % MOD;
         long long int second = prev2 % MOD;
         long long int sum  = (first + second) % MOD;
         
         long long int ans = ((i-1) * sum) % MOD;
         prev2 = prev1;
         prev1 = ans;
     }
     
     return prev1;
     
 }

 long long int countDerangements(int n) {
     
 //     // Recursion + Memoization
 //     vector<long long int> dp(n+1,-1);
 //     return solveMem(n,dp);
    
     
 //     // Tabulation
 //     return solveTab(n);
    
     
     
     // Space Optimization
     return solveSpaceOpt(n);
     
               
                
 }
 
 
 
 */
