//
//  main.cpp
//  Lect-9 Count Subset with given Sum
//
//  Created by Himanshu Bairwa on 29/07/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
/*
 QUESTION: COUNT SUBSET WITH GIVEN SUM
 
 LINK:  https://practice.geeksforgeeks.org/problems/perfect-sum-problem5633/1
 
 CODE:
 
 

 # define MOD 1000000007
 class Solution{

     public:
     int perfectSum(int arr[], int n, int sum)
     {
 //       int dp[n+1][sum+1];
 //       for(int i = 0; i<n+1; i++){
 //           for(int j = 0; j<sum+1; j++){
 //               if(i == 0){
 //                   dp[i][j] = 0;
 //               }
 //               if(j == 0){
 //                   dp[i][j] = 1;
 //               }
 //           }
 //       }
       
 //       for(int i = 1; i<n+1; i++){
 //           for(int j = 1; j<sum+1; j++){
 //               if(arr[i-1] <= j){
 //                   dp[i][j] = dp[i-1][j] + dp[i-1][j - arr[i-1]];
 //               }
 //               else{
 //                   dp[i][j] = dp[i-1][j];
 //               }
 //           }
 //       }
       
 //       return (dp[n][sum]);
 //     }
     
      int t[n+1][sum+1];
         for(int i = 0 ; i<n+1; i++){
             t[i][0] = 1;
         }
         for(int j = 1; j<sum+1; j++){
             t[0][j] = 0;
         }
         
         for(int i = 1; i<n+1; i++){
             for(int j = 1; j<sum+1; j++){
                 if(arr[i-1] <= j){
                     t[i][j] = (t[i-1][j-arr[i-1]]) + (t[i-1][j]);
                 }
                 else{
                     t[i][j] = t[i-1][j];
                 }
             }
         }
         
         return t[n][sum];
      }
       
 };

 
 
 
 */
