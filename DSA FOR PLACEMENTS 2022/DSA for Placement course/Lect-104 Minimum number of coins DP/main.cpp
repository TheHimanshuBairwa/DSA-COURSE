//
//  main.cpp
//  Lect-104 Minimum number of coins DP
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
 QUESTION: MINIMUM ELEMENT
 
 LINK:  https://www.codingninjas.com/codestudio/problems/minimum-elements_3843091
 
 CODE:  RECURSION, REC+MEMOIZATION , TABULATION
 
 
 int solveRec(vector<int> &num, int x){
     // base case
     if(x == 0) {
         return 0;
     }
     
     if(x < 0){
         return INT_MAX;
     }
     int mini = INT_MAX;
     for(int i = 0; i<num.size(); i++){
         int ans = solveRec(num, x-num[i]);
         if(ans != INT_MAX) {
             mini = min(mini, 1+ans);
         }
     }
     return mini;
 }

 // fucntion for solving using memoization + recursion
 int solveRecMemo(vector<int> &num, int x,vector<int> &dp){
     // base case
     if(x == 0) {
         return 0;
     }
     
     if(x < 0){
         return INT_MAX;
         
      // step3:
      if(dp[x] != -1) {
          return dp[x];
      }
     }
     int mini = INT_MAX;
     for(int i = 0; i<num.size(); i++){
         // step2: recursion in dp array
         int ans = solveRecMemo(num, x-num[i],dp);
         if(ans != INT_MAX) {
             mini = min(mini, 1+ans);
         }
     }
     dp[x] = mini;
     return mini;
 }



 // solving using Tabulation method
 int solveTabul(vector<int> &num, int x){
     
     vector<int> dp(x+1,INT_MAX);
     dp[0] = 0;
     for(int i =1; i<=x; i++) {
         // i am trying to solve every amount figure from 1 to x
         for(int j = 0; j<num.size(); j++) {
             if( i - num[j] >= 0 && dp[i-num[j]] != INT_MAX){
                 dp[i] = min(dp[i], 1+dp[i-num[j]]);
             }
             
         }
     }
     if(dp[x] == INT_MAX)
         return -1;
      return dp[x];
 }


 int minimumElements(vector<int> &num, int x)
 {
 //    int ans = solveRec(num,x);
 //     if(ans == INT_MAX) {
 //         return -1;
 //     }
 //     return ans;
     
     
 //     // solving using Recursion + Memoization
 //     // step1: dp array
 //     vector<int> dp(x+1,-1);
 //     int ans = solveRecMemo(num,x,dp);
     
 //     if( ans == INT_MAX) {
 //         return -1;
 //     }
 //     return ans;
     
   
     // solving using Tabulation method
     return solveTabul(num,x);
     
     
     
     
     
 }
 
 
 */
