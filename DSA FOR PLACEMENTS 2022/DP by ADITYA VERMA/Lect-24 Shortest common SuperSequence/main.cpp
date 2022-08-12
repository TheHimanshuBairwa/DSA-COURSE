//
//  main.cpp
//  Lect-24 Shortest common SuperSequence
//
//  Created by Himanshu Bairwa on 08/08/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


/*
 QUESTION: SHORTEST COMMON SUPERSEQUENCE
 
 LINK: https://practice.geeksforgeeks.org/problems/shortest-common-supersequence0322/1
 
 CODE: class Solution
 {
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
             for(int j = 1; j<m+1; j++){
                 if(s1[i-1] == s2[j-1]){
                     dp[i][j] = 1 + dp[i-1][j-1];
                 }
                 else{
                     dp[i][j] = max(dp[i][j-1] , dp[i-1][j]);
                 }
             }
         }
         
         return dp[n][m];
         
     }
     
     //Function to find length of shortest common supersequence of two strings.
     int shortestCommonSupersequence(string X, string Y, int m, int n)
     {
         int lcs = LCS(X,Y,m,n);
         int ans = m + n - lcs;
         return ans;
     }
 };
 
 
 */
