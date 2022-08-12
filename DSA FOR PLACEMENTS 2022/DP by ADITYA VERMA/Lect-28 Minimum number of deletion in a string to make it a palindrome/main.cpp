//
//  main.cpp
//  Lect-28 Minimum number of deletion in a string to make it a palindrome
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
 QUESTION: Minimum number of deletion in a string to make it a palindrome
 
 LINK: https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions4610/1
 
 CODE:
 
 NOTE--> For minimum number of deletion in astring to make it palindrome is
  ans  = length of string - Longest Palindromic Subsequence of string S1
 
 
 int LCS(string s1, string s2, int n, int m){
         
         vector<vector<int>> dp(n+1, vector<int>(m+1));
         for(int i = 0; i<n+1; i++){
             for(int j = 0; j<m+1; j++){
                 if(i == 0 || j == 0){
                     dp[i][j] = 0;
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

 int minDeletions(string str, int n) {
         string temp = str;
         reverse(str.begin(),str.end());
         
         int m = temp.length();
         
         int temp_ans = LCS(str,temp,n,m);
         int ans = n - temp_ans;
         return ans;
 }
 
 
 
 */
