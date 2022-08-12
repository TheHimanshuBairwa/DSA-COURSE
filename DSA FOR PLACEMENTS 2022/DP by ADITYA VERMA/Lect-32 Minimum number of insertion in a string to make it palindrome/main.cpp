//
//  main.cpp
//  Lect-32 Minimum number of insertion in a string to make it palindrome
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
 QUESTION: Minimum number of insertion in a string to make it palindrome
 
 LINK : https://practice.geeksforgeeks.org/problems/form-a-palindrome1455/1
 
 CODE:
 number of insertion and deleteion are same for amking string palindrome
 
 
 class Solution{
   public:
   
     int LCS(string X, string Y, int n, int m){
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
                 if(X[i-1] == Y[j-1]){
                     dp[i][j] = 1 + dp[i-1][j-1];
                 }else{
                     dp[i][j] = max(dp[i][j-1], dp[i-1][j]);
                 }
             }
         }
         return dp[n][m];
         
     }
   
     int countMin(string str){
     string temp = str;
     reverse(str.begin(), str.end());
     int n = str.length();
     int m = temp.length();
     
     int temp_ans = LCS(str,temp,n,m);
     int ans = n - temp_ans;
     return ans;
     }
 };
 
 
 
 */
