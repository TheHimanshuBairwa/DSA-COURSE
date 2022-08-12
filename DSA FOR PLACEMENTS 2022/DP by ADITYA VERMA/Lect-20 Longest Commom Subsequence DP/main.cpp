//
//  main.cpp
//  Lect-20 Longest Commom Subsequence DP
//
//  Created by Himanshu Bairwa on 03/08/22.
//

#include <iostream>
#include<vector>
using namespace std;

int solveRec(string s1, string s2, int n, int m){
    // base case
           if(n == 0 || m == 0){
               return 0;
           }
           
           // choice diagram code
           if(s1[n-1] == s2[m-1]){
               return 1+solveRec(s1,s2,n-1,m-1);
           }
           else{
               return max(solveRec(s1,s2,n,m-1), solveRec(s1,s2,n-1,m));
           }
       }


int solveMem(string s1, string s2, int n, int m, vector<vector<int>> &dp){
    
    // base case
    if(n==0 || m == 0){
        return 0;
    }
    
    if(dp[n][m] != -1){
        return dp[n][m];
    }
    
    if(s1[n-1] == s2[m-1]){
         dp[n][m] = 1 + solveMem(s1,s2,n-1,m-1,dp);
    }
    else{
         dp[n][m] = max(solveMem(s1,s2,n-1,m,dp), solveMem(s1,s2,n,m-1,dp));
    }
    
    return dp[n][m];
}




 int solveTab(string text1,string text2,int n, int m){
        int dp[n+1][m+1];
        for(int i = 0; i<n+1; i++) {
            for(int j = 0; j<m+1; j++){
                if(i == 0 || j == 0){
                     dp[i][j] = 0;
                }
               
            }
        }
       
        for(int i = 1; i<n+1; i++){
            for(int j = 1; j<m+1; j++){
                if(text1[i-1] == text2[j-1]){
                    dp[i][j]  = 1 + dp[i-1][j-1];
                }
                else{
                    dp[i][j] = max(dp[i-1][j] , dp[i][j-1]);
                }
               
            }
        }
       
        return dp[n][m];
}


int main() {
    string s1 = "psnw";
    string s2 = "vozsh";
    int n = 4;
    int m = 5;
    
    
    vector<vector<int>> dp(n+1, vector<int>(m+1,-1));
    int ans1 = solveMem(s1,s2,n,m,dp);
    int ans2 = solveRec(s1,s2,n,m);
    int ans3 = solveTab(s1,s2,n,m);
    cout<<"ans with Mem: "<<ans1<<endl;
    cout<<"ans with rec: "<< ans2 << endl;
    cout<<"ans with Tab: "<<ans3 << endl;
    
}
