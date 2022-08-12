//
//  main.cpp
//  Lect-26 Longest Palindromic Subsequence
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
 QUESTION: LONGEST PALINDROMIC SUBSEQUENCE
 
 LINK: https://practice.geeksforgeeks.org/problems/longest-palindromic-subsequence-1612327878/1
 
 CODE:
 
 NOTE-->  Longest Palindromic subsepquence = Longest common subsequence of string 1 and reverse opf string 1
 
 

 class Solution{
   public:
   
     int LCS(string s1, string s2, int n, int m){
         
         vector<vector<int>> dp(n+1, vector<int>(m+1));
         for(int i = 0; i<n+1; i++){
             for(int j = 0; j<m+1; j++){
                 if(i == 0 || j == 0){
                     dp[i][j] == 0;
                 }
             }
         }
         
         for(int i = 1; i<n+1; i++){
             for(int j =1; j<m+1; j++){
                 if(s1[i-1] == s2[j-1]){
                     dp[i][j] = 1 + dp[i-1][j-1];
                     
                 }else{
                     dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                 }
             }
         }
         return dp[n][m];
     }
   
     
     int longestPalinSubseq(string A) {
         string temp = A;
         reverse(A.begin(),A.end());
         int n = A.length();
         int m = temp.length();
         
         int ans = LCS(A,temp,n,m);
         return ans;
     }
 };
 
 */
