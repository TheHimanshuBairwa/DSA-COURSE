//
//  main.cpp
//  Lect-102 Dynamic Programming Introduction
//
//  Created by Himanshu Bairwa on 20/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


/*
 QUESTION: FIBONACCI SERIES USING DP
 
 LINK:  https://www.codingninjas.com/codestudio/problems/nth-fibonacci-number_74156
 
 CODE:
 1-> TOP-DOWN APPROACH (RECURSSION + MEMOIZATION)
 
 #include<bits/stdc++.h>
 using namespace std;

 int fib(int n, vector<int> &dp){
     // base case
     if( n<= 1){
         return n;
     }
     
     //step3
     if(dp[n] != -1){
         return dp[n];
     }
     
     // step2
     dp[n] = fib(n-1,dp) + fib(n-2,dp);
     return dp[n];
 }
 int main()
 {
     int n ;
     cin>>n;
      // step 1
     vector<int> dp(n+1);
     for(int i = 0; i<=n; i++) {
         dp[i] = -1;
     }
     
     cout<< fib(n, dp)<<endl;
     
     return 0;
 }
 
 
 
 /*    BOTTOM UP APPROACH (TABULATION)     */
/*

 CODE:

#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
       int n;
    cin>>n;
    
    // step 1:
    vector<int> dp(n+1);
    
    // step 2:
    dp[0] = 0;
    dp[1] = 1;
    
    // step 3:
    for(int i = 2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    
    cout<<dp[n]<<endl;
}
 

*/



/*
 APPLYING SPACE OPTIMIZATION
 
 CODE:
 
 #include<bits/stdc++.h>
 #include<vector>
 using namespace std;

 int main()
 {
        int n;
     cin>>n;
     
    int prev1 = 1;
     int prev2 = 0;
     
     for(int i = 2; i<=n; i++){
         int curr = prev1 + prev2;
         
         // shifting to nect values logic
         prev2 = prev1;
         prev1 = curr;
     }
    cout<< prev1<<endl;
 }
 
 
 
 
 */
