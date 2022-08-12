//
//  main.cpp
//  Lect-25  Minimum Number of Insertion and Deletion to convert String a to String b
//
//  Created by Himanshu Bairwa on 09/08/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION:  Minimum Number of Insertion and Deletion to convert String a to String b
 
 LINK: https://practice.geeksforgeeks.org/problems/minimum-number-of-deletions-and-insertions0209/1
 
 CODE:
 
 class Solution{
         

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
     
     
     int minOperations(string str1, string str2)
     {
        int n = str1.length();
        int m = str2.length();
        
        int lcs = LCS(str1,str2,n,m);
        
        int ans = (n - lcs) + (m - lcs);
        
        return ans;
         
     }
 };
 
 
 */
