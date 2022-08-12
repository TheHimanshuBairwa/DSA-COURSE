//
//  main.cpp
//  Lect-38 Palindrome Partitioning Optimized
//
//  Created by Himanshu Bairwa on 11/08/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION: PALINDROME PARTITIONING USING MORE OPTIMIZED VERSION OF MEMOIZATION
 
 LINK: https://practice.geeksforgeeks.org/problems/palindromic-patitioning4845/1
 
 CODE:
 
 

 class Solution{
 public:
     
     bool isPalindrome(string s,int i,int j){
         
         if(i == j)
             return true;
         
         if(i > j)
             return true;
             
         while(i < j){
             if(s[i] != s[j])
                 return false;
             
             i++;
             j--;
         }
         return true;
     }
     
     int solve(string s, int i, int j,vector<vector<int>> &dp){
         // base condition
         if(i >= j){
             return 0;
         }
         
         if(isPalindrome(s,i,j) == true){
             return 0;
         }
         
         if(dp[i][j] != -1){
             return dp[i][j];
         }
         
         int mini = INT_MAX;
         int left = 0;
         int right = 0;
         for(int k = i; k<=j-1; k++){
             // int tempAns = solve(s,i,k,dp) + solve(s,k+1,j,dp) + 1;
             if(dp[i][k] != -1){
                 left = dp[i][k];
             }
             else{
                 left = solve(s,i,k,dp);
                 dp[i][k] = left;
             }
             
             if(dp[k+1][j] != -1){
                 right = dp[k+1][j];
             }
             else{
                 right = solve(s,k+1,j,dp);
                 dp[k+1][j] = right;
             }
             
             int tempAns = 1 + left + right;
             mini = min( mini, tempAns);
         }
         return dp[i][j] = mini;
         
     }
     
     
     int palindromicPartition(string str)
     {
         int n = str.length();
         vector<vector<int>> dp(n+1,vector<int>(n+1, -1));
         return solve(str,0,n-1,dp);
     }
 };

 
 
 */
