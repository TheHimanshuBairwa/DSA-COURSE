//
//  main.cpp
//  Lect-14 Rod cutting Problem Unbounded knapsack
//
//  Created by Himanshu Bairwa on 02/08/22.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

/*
 QUESTION : ROD CUTTING PROBLEM USING UNBOUNDED KNAPSACK
 
 LINK:  https://practice.geeksforgeeks.org/problems/rod-cutting0840/1
 
 CODE:
 
 int cutRod(int price[], int n) {
         int w[n];
         for(int i = 0; i<n+1; i++){
             w[i-1] = i;
         }
         
         int length = n;
        
         int dp[n+1][length+1];
          
         for(int i= 0; i<n+1; i++){
             dp[i][0] = 0;
         }
         for(int i = 0; i<length+1; i++){
             dp[0][i] = 0;
         }
         
         for(int i = 1; i<n+1; i++){
             for(int j = 1; j<length+1; j++){
                 if(w[i-1] <= j){
                    dp[i][j] = max(price[i-1] + dp[i][j-w[i-1]], dp[i-1][j]);
                 }
                 else{
                     dp[i][j] = dp[i-1][j];
                 }
             }
         }
         return dp[n][length];
 
 
 */
