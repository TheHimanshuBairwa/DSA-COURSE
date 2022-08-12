//
//  main.cpp
//  Lect-29 Print Shortest comon SuperSequence
//
//  Created by Himanshu Bairwa on 10/08/22.
//

#include <iostream>
#include<vector>
using namespace std;

string printSCS(string s1, string s2, int n , int m){
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
                dp[i][j] = min(dp[i][j-1], dp[i-1][j]);
            }
        }
    }
    
    int i = n;
    int j = m;
    string s = "";
    
    while(i > 0 && j > 0){
        if(s1[i-1] == s2[j-1]){
            s.push_back(s1[i-1]);
            i--;
            j--;
        }
        else if(dp[i-1][j] > dp[i][j-1]){
            s.push_back(s2[j-1]);
            j--;
        }
        else{
            s.push_back(s1[i-1]);
            i--;
        }
    }
    
    while(i > 0){
        s.push_back(s1[i-1]);
        i--;
    }
    
    while(j > 0){
        s.push_back(s2[j-1]);
        j--;
    }
    
    reverse(s.begin(), s.end());
    return s;
    
}

string printShortestSuperSeq(string X, string Y)
{
    int m = X.length();
    int n = Y.length();
 
    // dp[i][j] contains length of shortest supersequence
    // for X[0..i-1] and Y[0..j-1]
    int dp[m + 1][n + 1];
 
    // Fill table in bottom up manner
    for (int i = 0; i <= m; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            // Below steps follow recurrence relation
            if(i == 0)
                dp[i][j] = j;
            else if(j == 0)
                dp[i][j] = i;
            else if(X[i - 1] == Y[j - 1])
                dp[i][j] = 1 + dp[i - 1][j - 1];
            else
                dp[i][j] = 1 + min(dp[i - 1][j], dp[i][j - 1]);
        }
    }
 
    // Following code is used to print shortest supersequence
 
    // dp[m][n] stores the length of the shortest supersequence
    // of X and Y
     
 
    // string to store the shortest supersequence
    string str;
 
    // Start from the bottom right corner and one by one
    // push characters in output string
    int i = m, j = n;
    while (i > 0 && j > 0)
    {
        // If current character in X and Y are same, then
        // current character is part of shortest supersequence
        if (X[i - 1] == Y[j - 1])
        {
            // Put current character in result
            str.push_back(X[i - 1]);
 
            // reduce values of i, j and index
            i--, j--;
        }
 
        // If current character in X and Y are different
        else if (dp[i - 1][j] > dp[i][j - 1])
        {
            // Put current character of Y in result
            str.push_back(Y[j - 1]);
 
            // reduce values of j and index
            j--;
        }
        else
        {
            // Put current character of X in result
            str.push_back(X[i - 1]);
 
            // reduce values of i and index
            i--;
        }
    }
 
    // If Y reaches its end, put remaining characters
    // of X in the result string
    while (i > 0)
    {
        str.push_back(X[i - 1]);
        i--;
    }
 
    // If X reaches its end, put remaining characters
    // of Y in the result string
    while (j > 0)
    {
        str.push_back(Y[j - 1]);
        j--;
    }
 
    // reverse the string and return it
    reverse(str.begin(), str.end());
    return str;
}
 

int main() {
   
    string X = "AGGTAB";
    string Y = "GXTXAYB";
    int n = 6;
    int m = 7;
    
    string ans = printSCS(X,Y,n,m);
    cout<<ans<<endl;
    cout<<endl;
    cout<<printShortestSuperSeq(X,Y)<<endl;
    
    return 0;
}
