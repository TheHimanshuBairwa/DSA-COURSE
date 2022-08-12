//
//  main.cpp
//  Lect-31 Sequence Pattern Matching
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
 QUESTION: SEQUENCE PATTERN MATCHING USING LCS
 
 LINK:  https://leetcode.com/problems/is-subsequence/submissions/
 
 CODE:
 
 class Solution {
 public:
     
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
     
     bool isSubsequence(string s, string t) {
         int n =s.length();
         int m = t.length();
         int lcs = LCS(s,t,n,m);
         
         if(lcs == n){
             return true;
         }
         else{
             return false;
         }
         
     }
 };
 
 
 
 */
