//
//  main.cpp
//  Lect-30 Longest Repeating Subsequence
//
//  Created by Himanshu Bairwa on 10/08/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION: LONGEST REPEATING SUBSEQUENCE
 
 LINK : https://practice.geeksforgeeks.org/problems/longest-repeating-subsequence2004/1
 
 CODE:
  
 we need to just change if condition in  LCS code that only increment by 1 if  (i != j)
 
 
 class Solution {
     public:
     
         int repeatLCS(string X, string Y, int n, int m){
             vector<vector<int>> dp(n+1, vector<int>(m+1));
             
             for(int i = 0; i<n+1; i++){
                 for(int j = 0; j<m+1; j++){
                     if(i == 0 || j == 0){
                         dp[i][j] = 0;
                     }
                 }
             }
             
             for(int i = 1; i<n+1; i++){
                 for(int j = 1; j<m+1; j++){
                     if((X[i-1] == Y[j-1]) && i != j){
                         dp[i][j] = 1 + dp[i-1][j-1];
                     }
                     else{
                         dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                     }
                 }
             }
             return dp[n][m];
         }
     
     
         int LongestRepeatingSubsequence(string str){
             string temp = str;
             
             int n = str.length();
             int m = temp.length();
             
             return repeatLCS(str,temp,n,m);
         }

 };

 
 
 
 */
