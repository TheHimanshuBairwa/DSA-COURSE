//
//  main.cpp
//  Lect-23 Print Longest common Subsequence
//
//  Created by Himanshu Bairwa on 08/08/22.
//




/* PRINTING LONGEST COMMON SUBSEQUENCE  */

#include<iostream>
#include<vector>
using namespace std;

string printingLCS(string s1,string s2,int n, int m){
    
    vector<vector<int>> dp(n+1, vector<int>(m+1));
    string ans = "";
    
    for(int i = 0; i<n+1; i++){
        for(int j = 0; j<m+1; j++){
            if(i == 0 || j == 0){
                dp[i][j] = 0;
                
            }
        }
    }
    
    for(int i = 1; i<n+1; i++){
        for(int j = 1; j<m+1; j++){
            if(s1[i-1] ==  s2[j-1]){
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else{
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }
    
    int i = n;
    int j = m;
    while(i > 0 && j > 0){
        if(s1[i-1] == s2[j-1]){
            ans.push_back(s1[i-1]);
            i--;
            j--;
            
        }else{
            if(dp[i][j-1]>dp[i-1][j]){
                j--;
            }
            else{
                i--;
            }
        }
    }
    reverse(ans.begin(), ans.end());
    
    return ans;
}

int main(){
    string s1 = "abcde";
    string s2 = "abcgd";
    int n = 5;
    int m = 5;
    cout<<printingLCS(s1,s2,n,m)<<endl;
    
    return 0;
}



/*
 PRINTING LONGEST COMMON SUBSEQUENCE
 
 class Solution {
 public:
     int longestCommonSubsequence(string x, string y) {
         int n=x.size(),m=y.size();
         string s;
         int dp[n+1][m+1];
         for(int i=0;i<=n;i++)dp[i][0]=0;
         for(int i=0;i<=m;i++)dp[0][i]=0;
         for(int i=1;i<=n;i++){
             for(int j=1;j<=m;j++){
                 if(x[i-1]==y[j-1])dp[i][j]=1+dp[i-1][j-1];
                 else {
                     dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                 }
             }
         }
         // for printing longest common subsequence
         int i=n,j=m;
         while(i>0 && j>0){    // if any of this i and j becomes 0 means one string is empty
             if(x[i-1]==y[j-1]){
                 s+=x[i-1];    //if character matches then add that to result string and move diagonally up
                 i--;j--;
             }
             else{
                 if(dp[i][j-1]>dp[i-1][j])j--;    // else find the max of up and right position of dp table and move accordingly to up or left
                 else i--;
             }
         }
         reverse (s.begin(),s.end());    // reverse the string as we started from last
         cout<<s;
         return dp[n][m];
     }
 };
 
 
 
 
 */
