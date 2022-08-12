//
//  main.cpp
//  Lect-22 Longest Common Substring 2D DP
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
 QUESTION: LOMGEST COMMON SUBSTRING
 
 LINK:   https://practice.geeksforgeeks.org/problems/longest-common-substring1452/1
 
 CODE:
 
 
 class Solution{
     public:
    
     int longestCommonSubstr (string S1, string S2, int n, int m)
     {
         int dp[n+1][m+1];
         int ans= 0;
         for(int i= 0;i<n+1; i++){
             for(int j = 0; j<m+1; j++){
                 if(i == 0 || j == 0){
                     dp[i][j] = 0;
                 }
             }
         }
        
         for(int i = 1; i<n+1; i++){
             for(int j = 1; j<m+1 ; j++){
                 if(S1[i-1] == S2[j-1]){
                     dp[i][j] = 1 + dp[i-1][j-1];
                 }else
                 {
                     dp[i][j] = 0;
                 }
                // FOR GETTING MAXIMUM VALUE
                 ans = max(ans,dp[i][j]);
             }
         }
         return ans;
        
     }
 };

 
 
 
 
 */
